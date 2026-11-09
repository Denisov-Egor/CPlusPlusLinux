#include <iostream>
#include <string>
#include <limits>

void Menu()
{
  std::cout << R"(
  ========== УПРАВЛЕНИЕ ТОВАРАМИ ==========

  1. Показать все товары
  2. Добавить информацию о товаре
  3. Изменить название товара
  4. Изменить цену товара
  5. Изменить количество товара
  6. Показать информацию о товаре
  0. Выход

  =========================================
  Выберите действие:
  
  )";
}

class Product
{
private:
  std::string name;
  double price;
  int quantity;

public:
  Product()
  {
    name = "Неизвестно";
    price = 0.0;
    quantity = 0;
  }

  void displayInfo() const
  {
    std::cout << "Информация о товаре\n"
    << "-------------------\n"

    << "Название: " << name << '\n'
    << "Цена: " << price << '\n'
    << "Количество: " << quantity << '\n';
  }

  bool setName(const std::string& newName)
  {
    if (newName.empty())
    {
      return false;
    }
    
    name = newName;
    return true;
  }

  bool setPrice(double newPrice)
  {
    if (newPrice <= 0)
    {
      return false;
    }
    
    price = newPrice;
    return true;
  }

  bool setQuantity(int newQuantity)
  {
    if (newQuantity < 0)
    {
      return false;
    }
    
    quantity = newQuantity;
    return true;
  }

  std::string getName() const
  {
    return name;
  }

  double getPrice() const
  {
    return price;
  }

  int getQuantity() const 
  {
    return quantity;
  }
};

void showAllProducts(Product products[], int SIZE)
{
  std::cout << "\n========== СПИСОК ТОВАРОВ ==========\n\n";
  
  for (int i = 0; i < SIZE; i++)
  {
    std::cout << "Товар №" << i + 1 << '\n';
    products[i].displayInfo();
  
    std::cout << "-----------------------------------\n";
  }
}

void addProductInfo(Product products[], int SIZE)
{
  int productNumber;
  std::string newName;
  double newPrice;
  int newQuantity;

  std::cout << "Введите номер товара (1-" << SIZE << "): ";
  std::cin >> productNumber;
  
  if (productNumber > SIZE || productNumber <= 0)
  {
    std::cout << "Ошибка: некорректный номер товара.\n";
    return;
  }
  
  Product& product = products[productNumber - 1];

  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

  std::cout << "Введите название: ";
  std::getline(std::cin, newName);
  
  if (!product.setName(newName))
  {
    std::cout << "Ошибка: название не может быть пустым.\n";
    return;
  }

  std::cout << "Введите цену: ";
  std::cin >> newPrice;

  if (!product.setPrice(newPrice))
  {
    std::cout << "Ошибка: цена должна быть больше нуля.\n";
    return;
  }

  std::cout << "Введите количество: ";
  std::cin >> newQuantity;

  if (!product.setQuantity(newQuantity))
  {
    std::cout << "Ошибка: количество не может быть отрицательным.\n";
    return;
  }

  std::cout << "\nИнформация о товаре успешно добавлена.\n";
}

void changeProductName(Product products[], int SIZE)
{
  int productNumber;
  std::string newName;

  std::cout << "Введите номер товара (1-" << SIZE << "): ";
  std::cin >> productNumber;

  if (productNumber > SIZE || productNumber <= 0)
  {
    std::cout << "Ошибка: некорректный номер товара.\n";
    return;
  }

  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

  std::cout << "Введите название: ";
  std::getline(std::cin, newName);

  Product& product = products[productNumber - 1];

  if (!product.setName(newName))
  {
    std::cout << "Ошибка: название не может быть пустым.\n";
    return;
  }

  std::cout << "\nИмя успешно изменено.\n";
}

void changeProductPrice(Product products[], int SIZE)
{
  int productNumber;
  double newPrice;
  
  std::cout << "Введите номер товара (1-" << SIZE << "): ";
  std::cin >> productNumber;
  
  if (productNumber > SIZE || productNumber <= 0)
  {
    std::cout << "Ошибка: некорректный номер товара.\n";
    return;
  }
  
  Product& product = products[productNumber - 1];

  std::cout << "Введите цену: ";
  std::cin >> newPrice;

  if (!product.setPrice(newPrice))
  {
    std::cout << "Ошибка: цена должна быть больше нуля.\n";
    return;
  }

  std::cout << "\nЦена успешно изменена.\n";
}

void changeProductQuantity(Product products[], int SIZE)
{
  int productNumber;
  int newQuantity;

  std::cout << "Введите номер товара (1-" << SIZE << "): ";
  std::cin >> productNumber;

  if (productNumber > SIZE || productNumber <= 0)
  {
    std::cout << "Ошибка: некорректный номер товара.\n";
    return;
  }

  Product& product = products[productNumber - 1];

  std::cout << "Введите новое количество: ";
  std::cin >> newQuantity;

  if (!product.setQuantity(newQuantity))
  {
    std::cout << "Ошибка: количество не может быть отрицательным.\n";
    return;
  }

  std::cout << "\nКоличество успешно изменено.\n";
}

void showProductInfo(Product products[], int SIZE)
{
  int productNumber;

  std::cout << "Введите номер товара (1-" << SIZE << "): ";
  std::cin >> productNumber;

  if (productNumber > SIZE || productNumber <= 0)
  {
    std::cout << "Ошибка: некорректный номер товара.\n";
    return;
  }

  Product& product = products[productNumber - 1];

  std::cout << "\n";
  product.displayInfo();
}

int main()
{
  const int SIZE = 4;

  Product products[SIZE];
  int choice = -1;

  while (choice != 0)
  {
    Menu();

    std::cin >> choice;

    switch (choice)
    {
      case 1:
        showAllProducts(products, SIZE);
        break;

      case 2:
        addProductInfo(products, SIZE);
        break;

      case 3:
        changeProductName(products, SIZE);
        break;

      case 4:
        changeProductPrice(products, SIZE);
        break;

      case 5:
        changeProductQuantity(products, SIZE);
        break;

      case 6:
        showProductInfo(products, SIZE);
        break;

      case 0:
        std::cout << "\nВыход из программы.\n";
        break;

      default:
        std::cout << "\nОшибка: выберите пункт меню.\n";
        break;
    }
  }
}