#include <iostream>
#include <string>

class AppConfig{
private:
  std::string applicationName;
  int maxConnections;
  bool debugMode;

  static int objectCount;

public:
  AppConfig(const std::string &applicationName, int maxConnections, bool debugMode)
          : applicationName(applicationName),
            maxConnections(maxConnections),
            debugMode(debugMode)
  {
    ++objectCount;
  }

  AppConfig(const AppConfig &other)
          : applicationName(other.applicationName),
            maxConnections(other.maxConnections),
            debugMode(other.debugMode)
  {
    ++objectCount;
  }

  AppConfig &operator=(const AppConfig &other) {
    if (this == &other) {
      return *this;
    }

    applicationName = other.applicationName;
    maxConnections = other.maxConnections;
    debugMode = other.debugMode;

    return *this;
  }

  static int getObjectCount() {
    return objectCount;
  }

  void printConfig() const{
    std::cout << "Название: " 
              << applicationName 
              << '\n';
              
    std::cout << "Максимум соединений: " 
              << maxConnections 
              << '\n';

    std::cout << "Режим отладки: "
              << (debugMode ? "Включён" : "Выключен")
              << '\n';
  }
};

int AppConfig::objectCount = 0;

void runApplication() {
  std::cout << "Создание первого объекта\n";
  AppConfig first("Terminal", 10, true);
  std::cout << "Объектов: " << AppConfig::getObjectCount() << "\n\n";

  std::cout << "Создание второго объекта\n";
  AppConfig second("Editor", 20, false);
  std::cout << "Объектов: " << AppConfig::getObjectCount() << "\n\n";

  std::cout << "Копирование первого объекта\n";
  AppConfig third(first);
  std::cout << "Объектов: " << AppConfig::getObjectCount() << "\n\n";

  std::cout << "Присваивание второго объекта первому\n";
  first = second;
  std::cout << "Объектов: " << AppConfig::getObjectCount() << "\n\n";

  std::cout << "=== Первый объект ===\n";
  first.printConfig();

  std::cout << "\n=== Второй объект ===\n";
  second.printConfig();

  std::cout << "\n=== Третий объект ===\n";
  third.printConfig();
}

int main(){
  runApplication();

  return 0;
}