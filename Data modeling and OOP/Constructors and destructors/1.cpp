#include <iostream>
#include <string>

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

int main()
{
  Product products[4];
  int choice = -1;

  while (choice != 0)
  {
    Menu();

    std::cin >> choice;

    switch (choice)
    {
      case 1:
        std::cout << "\n========== СПИСОК ТОВАРОВ ==========\n\n";

        for (int i = 0; i < 4; i++)
        {
          std::cout << "Товар №" << i + 1 << '\n';
          products[i].displayInfo();

          std::cout << "-----------------------------------\n";
        }
        break;

      case 2:
        std::cout << "\nФункция добавления информации пока не реализована.\n";
        break;

      case 3:
        std::cout << "\nФункция изменения названия пока не реализована.\n";
        break;

      case 4:
        std::cout << "\nФункция изменения цены пока не реализована.\n";
        break;

      case 5:
        std::cout << "\nФункция изменения количества пока не реализована.\n";
        break;

      case 6:
        std::cout << "\nФункция просмотра информации пока не реализована.\n";
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