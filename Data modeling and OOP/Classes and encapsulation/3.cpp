#include <iostream>
#include <string>

using namespace std;

void Menu()
{
  cout << R"(
  ========== PRODUCT MANAGER ==========

  1. Изменить цену
  2. Показать информацию о товаре
  3. Добавить товар на склад
  4. Списать товар со склада
  0. Выход

  Выберите действие: 
  )";
}

class Product
{
private:
  string name = "Keyboard";
  double price = 0.0;
  int quantity = 0;  
public:
  string getName() const
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

  double getTotalValue() const
  {
    return price * quantity;
  }

  void setPrice(double newPrice)
  {
    if (newPrice <= 0)
    {
      cout << "Цена должна быть больше нуля.\n";
      return;
    }

    price = newPrice;
    cout << "Цена успешно изменена.\n";
  }

  void addStock(int amount)
  {
    if (amount <= 0)
    {
      cout << "Количество для добавления должно быть больше нуля.\n";
      return;
    }

    quantity += amount;
    cout << "Товар успешно добавлен на склад.\n";
  }

  void removeStock(int amount)
  {
  if (amount <= 0)
    {
      cout << "Количество для списания должно быть больше нуля.\n";
      return;
    }

    if (amount > quantity)
    {
      cout << "Недостаточно товара на складе.\n";
      return;
    }

    quantity -= amount;
    cout << "Товар успешно списан со склада.\n";
  }
};

int main()
{
  Product product;
  char choice = ' ';

  while (choice != '0')
  {
    Menu();
    cin >> choice;

    switch (choice)
    {
    case '1':
    {
      double newPrice;
      cout << "Введите новую цену: ";
      cin >> newPrice;
      product.setPrice(newPrice);
      break;
    }
    case '2':
      cout << "\nНазвание: " << product.getName()
      << "\nЦена: " << product.getPrice()
      << "\nКоличество: " << product.getQuantity()
      << "\nОбщая стоимость: " << product.getTotalValue()
      << '\n';
      break;

     case '3':
    {
      int amount;

      cout << "Введите количество товара для добавления: ";
      cin >> amount;

      product.addStock(amount);
      break;
    }

    case '4':
    {
      int amount;

      cout << "Введите количество товара для списания: ";
      cin >> amount;

      product.removeStock(amount);
      break;
    }

    case '0':
      cout << "Выход из программы.\n";
      break;

    default:
      cout << "Неизвестная команда.\n";
      break;
    }
  }

}