#include <iostream>

int main() {
    int a, b;

    std::cout << "Введите два целых числа: ";
    std::cin >> a >> b;

    // Побитовое И
    int bit_and = a & b;
    // Побитовое ИЛИ
    int bit_or = a | b;
    // Побитовое исключающее ИЛИ (XOR)
    int bit_xor = a ^ b;
    // Левый сдвиг первого числа на 2
    int left_shift = a << 2;
    // Правый сдвиг первого числа на 2
    int right_shift = a >> 2;

    std::cout << "\nРезультаты:\n";
    std::cout << a << " & " << b << " = " << bit_and << "\n";
    std::cout << a << " | " << b << " = " << bit_or << "\n";
    std::cout << a << " ^ " << b << " = " << bit_xor << "\n";
    std::cout << a << " << 2 = " << left_shift << "\n";
    std::cout << a << " >> 2 = " << right_shift << "\n";

    return 0;
}