#include <iostream>
#include <string>
#include <utility>

class Data{
private:
  std::string value;
public:
  Data(const std::string &text)
      : value(text)
  {
     std::cout << "Вызван конструктор копирования: "
              << value 
              << '\n';
  }

  Data(std::string &&text)
      : value(std::move(text))
  {
    std::cout << "Вызван конструктор перемещения: "
              << value 
              << '\n';
  }

  const std::string& getValue() const
  {
    return value;
  }
};

int main(){
  std::string original = "Привет";

  Data first(original);

  Data second(std::string("Мир"));

  Data third(std::move(original));

 std::cout << "\nСодержимое first: " 
          << first.getValue() 
          << '\n';
  
  std::cout << "Содержимое second: " 
            << second.getValue() 
            << '\n';

  std::cout << "Содержимое third: " 
            << third.getValue() 
            << '\n';

  std::cout << "Исходная строка после перемещения: "
            << original 
            << '\n';
}