#include <iostream>

class Configuration
{
private:
  int value;
public:
  /*explicit Configuration(int value)
  {
    this->value = value; //! первый варианвт 
  }*/

  explicit Configuration(int value) : value(value) //! лучший вариант  
  {

  }

  int getValue() const
  {
    return value;
  }

  void display() const
  {
    std::cout << "Configuration value: " << value << '\n';
  }

};

int main()
{
  Configuration config1(100);
  Configuration config2{200};

  config1.display();
  config2.display();

  std::cout << "Value: " << config1.getValue() << '\n';
  std::cout << "Value: " << config2.getValue() << '\n';
}