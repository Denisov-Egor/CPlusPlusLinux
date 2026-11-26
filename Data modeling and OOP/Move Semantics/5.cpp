#include <iostream>
#include <utility>
#include <string>

class Data{
private:
  std::string value;
public:
  Data(const std::string& value)
    : value(value)
  { 
    std::cout << "Вызван конструктор копирования строки\n";
  }

  Data(std::string&& value)
    : value(std::move(value))
  {
    std::cout << "Вызван конструктор перемещения строки\n";
  }

 Data(Data&& other)
      : value(std::move(other.value))
  {
    std::cout << "Вызван конструктор перемещения объекта\n";
  }

  Data& operator=(const Data& other)
  {
    if (this == &other) {
      return *this;
    }

    value = other.value;

    std::cout << "Вызван оператор копирующего присваивания\n";

    return *this;
  }

  Data& operator=(Data&& other)
  {
    if (this == &other) {
      return *this;
    }

    value = std::move(other.value);

    std::cout << "Вызван оператор перемещающего присваивания\n";

    return *this;
  }

  void print() const
  {
    std::cout << "Значение: " << value << '\n';
  }
};

int main()
{
  std::cout << "=== Создание исходной строки ===\n";

  std::string text = "Привет, C++";

  std::cout << "\n=== Создание объекта без std::move ===\n";

  Data first(text);
  first.print();

  std::cout << "\n=== Создание объекта с std::move ===\n";

  Data second(std::move(text));
  second.print();

  std::cout << "Исходная строка после перемещения: " << text << '\n';

  std::cout << "\n=== Копирующее присваивание ===\n";

  Data third("Третья строка");

  third = first;
  third.print();

  std::cout << "\n=== Перемещающее присваивание ===\n";

  Data fourth("Четвёртая строка");

  fourth = std::move(second);

  fourth.print();
  second.print();

  std::cout << "\n=== Завершение программы ===\n";

  return 0;
}
