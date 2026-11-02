#include <iostream>
#include <string>

using namespace std;

void Menu()
{
  cout << R"(
  ========== INVENTORY ITEM ==========

  1. Изменить название товара
  2. Изменить цену
  3. Добавить товар на склад
  4. Списать товар со склада
  5. Показать информацию о товаре
  6. Показать общую стоимость остатков
  0. Выход

  Выберите действие:
  )";
}

class InventoryItem
{
private:
  string name = "";
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

  bool setName(string newName)
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

  bool addStock(int amount)
  {
    if (amount <= 0)
    {
      return false;
    }
    
    quantity += amount;
    return true;
  }

  bool removeStock(int amount)
  {
    if (amount <= 0 || amount > quantity)
    {
      return false;
    }
    
    quantity -= amount;
    return true;
  }
};

int main()
{
  InventoryItem item;
  int choice = -1;
  string newName;
  double newPrice;
  int newQuantity;

  while (choice != 0)
  {
    Menu();
    cin >> choice;

    switch (choice)
    {
    case 1:
      cout << "Введите название товара: ";
      cin.ignore();
      getline(cin, newName);

      if (item.setName(newName))
      {
        cout << "Название успешно изменено.\n";
      }else
      {
        cout << "Ошибка: название не может быть пустым.\n";
      }
      break;
    
    case 2:
      cout << "Введите цену товара: ";
      cin >> newPrice;

      if (item.setPrice(newPrice))
      {
        cout << "Цена успешно изменена.\n";
      }else
      {
        cout << "Ошибка: цена должна быть больше нуля.\n";
      }
      break;

    case 3:
      cout << "Введите количество товара для добавления: ";
      cin >> newQuantity;

      if (item.addStock(newQuantity))
      {
        cout << "Товар успешно добавлен на склад.\n";
      }else
      {
        cout << "Ошибка: количество должно быть больше нуля.\n";
      }
      break;

    case 4:
      cout << "Введите количество товара для списания: ";
      cin >> newQuantity;
      
      if (item.removeStock(newQuantity))
      {
          cout << "Товар успешно списан со склада.\n";
      }else
      {
        cout << "Ошибка: некорректное количество или недостаточно товара на складе.\n";
      }
      break;

    case 5:
      cout << "\n========== ИНФОРМАЦИЯ О ТОВАРЕ ==========\n";
      cout << "Название: " << item.getName() << '\n';
      cout << "Цена: " << item.getPrice() << '\n';
      cout << "Количество: " << item.getQuantity() << '\n';
      break;

    case 6:
        cout << "Общая стоимость остатков: " << item.getTotalValue() << '\n';
        break;

    case 0:
      cout << "Программа завершена.\n";
      break;

    default:
      cout << "Ошибка: неизвестная команда.\n";
      break;
    }
  }
}