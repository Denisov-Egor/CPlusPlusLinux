#include <iostream>
#include <string>
#include <stdexcept>

class Product
{
private:
  std::string name;
  double price;
  int quantity;
public:
  Product(const std::string& productName, double productPrice, int productQuantity)
  :name(productName), price(productPrice), quantity(productQuantity)
  {
    if (productName.empty())
    {
      throw std::invalid_argument("Название товара не может быть пустым");
    }
    
    if (productPrice <= 0)
    {
      throw std::invalid_argument("Цена товара должна быть больше нуля");
    }

    if (productQuantity < 0)
    {
      throw std::invalid_argument("Количество товара не может быть отрицательным");
    }
  }
};

int main()
{
  std::string name;
  double price;
  int quantity;

  std::cout << "Введите название товара: ";
  std::cin >> name;

  std::cout << "Введите цену: ";
  std::cin >> price;

  std::cout << "Введите количество: ";
  std::cin >> quantity;


  try 
  {
    Product product(name, price, quantity);
    std::cout << "Товар успешно создан!\n";
  } catch (const std::invalid_argument& error) 
  {
    std::cout << error.what() << '\n';
  }
}