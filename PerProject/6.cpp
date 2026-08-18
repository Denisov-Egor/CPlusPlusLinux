#include <iostream>
#include <string>
#include <thread>
#include <atomic>
#include <mutex>
#include <vector>
#include <cstring>
#include <algorithm>

// ---- Кроссплатформенные обёртки для сокетов ----
#ifdef _WIN32
    #include <winsock2.h>
    #include <ws2tcpip.h>
    #pragma comment(lib, "ws2_32.lib")
    using socklen_t = int;
    #define CLOSE_SOCKET(s) closesocket(s)
    #define SOCKET_ERRNO WSAGetLastError()
    using socket_t = SOCKET;
    const socket_t INVALID_SOCK = INVALID_SOCKET;
#else
    #include <sys/socket.h>
    #include <arpa/inet.h>
    #include <unistd.h>
    #include <netinet/in.h>
    #include <cerrno>
    #define CLOSE_SOCKET(s) close(s)
    #define SOCKET_ERRNO errno
    using socket_t = int;
    const socket_t INVALID_SOCK = -1;
#endif

// Глобальный мьютекс для синхронизации вывода в консоль
std::mutex cout_mtx;

// Флаг активного соединения (используется для корректного завершения)
std::atomic<bool> connected{true};

// ---- Вспомогательные функции ----

// Инициализация сокетов (нужна только в Windows)
bool init_sockets() {
#ifdef _WIN32
    WSADATA wsa;
    return WSAStartup(MAKEWORD(2, 2), &wsa) == 0;
#else
    return true;
#endif
}

// Завершение работы с сокетами
void cleanup_sockets() {
#ifdef _WIN32
    WSACleanup();
#endif
}

// Отправка всех данных (гарантированная, с обработкой ошибок)
bool send_all(socket_t sock, const char* data, int len) {
    int sent = 0;
    while (sent < len) {
        int res = send(sock, data + sent, len - sent, 0);
        if (res <= 0) return false;
        sent += res;
    }
    return true;
}

// Поток приёма сообщений
void receiver(socket_t sock) {
    std::string buffer;
    char chunk[1024];
    while (connected) {
        int bytes = recv(sock, chunk, sizeof(chunk) - 1, 0);
        if (bytes <= 0) {
            // Соединение разорвано или ошибка
            if (bytes == 0) {
                std::lock_guard<std::mutex> lock(cout_mtx);
                std::cout << "[Соединение закрыто удалённой стороной]" << std::endl;
            } else {
                std::lock_guard<std::mutex> lock(cout_mtx);
                std::cout << "[Ошибка приёма]" << std::endl;
            }
            connected = false;
            break;
        }
        chunk[bytes] = '\0';
        buffer += chunk;

        // Извлекаем целые сообщения (разделитель '\n')
        size_t pos;
        while ((pos = buffer.find('\n')) != std::string::npos) {
            std::string msg = buffer.substr(0, pos);
            buffer.erase(0, pos + 1);
            if (!msg.empty()) {
                std::lock_guard<std::mutex> lock(cout_mtx);
                std::cout << "Собеседник: " << msg << std::endl;
            }
        }
    }
}

// Поток отправки сообщений
void sender(socket_t sock) {
    std::string input;
    while (connected) {
        // Читаем строку из консоли
        if (!std::getline(std::cin, input)) {
            // EOF (Ctrl+D / Ctrl+Z)
            break;
        }
        if (input == "/quit") {
            break;
        }
        // Отправляем сообщение с завершающим '\n'
        input += '\n';
        if (!send_all(sock, input.c_str(), input.size())) {
            std::lock_guard<std::mutex> lock(cout_mtx);
            std::cout << "[Ошибка отправки, соединение потеряно]" << std::endl;
            connected = false;
            break;
        }
    }
    // Сигнализируем о завершении отправляющего потока
    connected = false;
}

// Запуск сервера
void run_server(int port) {
    socket_t listen_sock = socket(AF_INET, SOCK_STREAM, 0);
    if (listen_sock == INVALID_SOCK) {
        std::cerr << "Не удалось создать сокет" << std::endl;
        return;
    }

    sockaddr_in addr{};
    addr.sin_family = AF_INET;
    addr.sin_port = htons(port);
    addr.sin_addr.s_addr = INADDR_ANY;

    if (bind(listen_sock, reinterpret_cast<sockaddr*>(&addr), sizeof(addr)) < 0) {
        std::cerr << "Ошибка bind" << std::endl;
        CLOSE_SOCKET(listen_sock);
        return;
    }

    if (listen(listen_sock, 1) < 0) {
        std::cerr << "Ошибка listen" << std::endl;
        CLOSE_SOCKET(listen_sock);
        return;
    }

    std::cout << "Ожидание подключения на порту " << port << "..." << std::endl;
    socket_t client_sock = accept(listen_sock, nullptr, nullptr);
    if (client_sock == INVALID_SOCK) {
        std::cerr << "Ошибка accept" << std::endl;
        CLOSE_SOCKET(listen_sock);
        return;
    }

    std::cout << "Клиент подключён! Можно начинать чат. Для выхода введите /quit" << std::endl;
    CLOSE_SOCKET(listen_sock); // серверный сокет больше не нужен

    // Запускаем потоки приёма и отправки
    std::thread recv_thr(receiver, client_sock);
    std::thread send_thr(sender, client_sock);

    send_thr.join();       // ждём, пока пользователь не выйдет
    CLOSE_SOCKET(client_sock); // закрываем сокет, чтобы поток приёма завершился
    recv_thr.join();

    std::cout << "Чат завершён." << std::endl;
}

// Запуск клиента
void run_client(const std::string& ip, int port) {
    socket_t sock = socket(AF_INET, SOCK_STREAM, 0);
    if (sock == INVALID_SOCK) {
        std::cerr << "Не удалось создать сокет" << std::endl;
        return;
    }

    sockaddr_in addr{};
    addr.sin_family = AF_INET;
    addr.sin_port = htons(port);
    inet_pton(AF_INET, ip.c_str(), &addr.sin_addr);

    std::cout << "Подключение к " << ip << ":" << port << "..." << std::endl;
    if (connect(sock, reinterpret_cast<sockaddr*>(&addr), sizeof(addr)) < 0) {
        std::cerr << "Не удалось подключиться к серверу" << std::endl;
        CLOSE_SOCKET(sock);
        return;
    }

    std::cout << "Подключено! Можно начинать чат. Для выхода введите /quit" << std::endl;

    std::thread recv_thr(receiver, sock);
    std::thread send_thr(sender, sock);

    send_thr.join();
    CLOSE_SOCKET(sock);
    recv_thr.join();

    std::cout << "Чат завершён." << std::endl;
}

// ---- main ----
int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Использование:\n"
                  << "  Сервер: " << argv[0] << " server [порт]\n"
                  << "  Клиент: " << argv[0] << " client <IP-адрес> [порт]\n"
                  << "Порт по умолчанию: 12345" << std::endl;
        return 1;
    }

    if (!init_sockets()) {
        std::cerr << "Не удалось инициализировать сокеты" << std::endl;
        return 1;
    }

    std::string mode = argv[1];
    int port = (argc >= 4 ? std::stoi(argv[3]) : 12345); // если порт указан

    if (mode == "server") {
        if (argc >= 3) port = std::stoi(argv[2]);
        run_server(port);
    } else if (mode == "client") {
        if (argc < 3) {
            std::cerr << "Укажите IP-адрес сервера" << std::endl;
            cleanup_sockets();
            return 1;
        }
        std::string ip = argv[2];
        if (argc >= 4) port = std::stoi(argv[3]);
        run_client(ip, port);
    } else {
        std::cerr << "Неизвестный режим. Используйте 'server' или 'client'." << std::endl;
    }

    cleanup_sockets();
    return 0;
}