#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void Menu()
{
  cout << R"(
  ========== КАТАЛОГ ТОВАРОВ ==========

  1. Добавить товар
  2. Найти товар
  3. Удалить товар
  4. Показать все товары
  5. Показать общую стоимость каталога
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
    if (amount <= 0 || quantity < amount)
    {
      return false;
    }

    quantity -= amount;
    return true;
  }

  
};

bool isSameName(const string& first, const string& second)
{
  if (first.size() != second.size())
  {
    return false;
  }

  for (int i = 0; i < first.size(); i++)
  {
    if (tolower(static_cast<unsigned char>(first[i])) != tolower(static_cast<unsigned char>(second[i])))
    {
      return false;
    }
  }

  return true;
}

bool addItem( InventoryItem items[], int& itemCount, string name, double price, int quantity)
{
  if (itemCount >= 100)
  {
    cout << "Ошибка: каталог заполнен.\n";
    return false;
  }

  InventoryItem newItem;

  if(!newItem.setName(name))
  {
    cout << "Ошибка: некорректное название.\n";
    return false;
  }

  for (int i = 0; i < itemCount; i++)
  {
    if (isSameName(items[i].getName(), name))
    {
      cout << "Ошибка: товар с таким названием уже существует.\n";
      return false;
    }
  }

  if (!newItem.setPrice(price))
  {
    cout << "Ошибка: некорректная цена.\n";
    return false;
  }

  if (!newItem.addStock(quantity))
  {
    cout << "Ошибка: некорректное количество.\n";
    return false;
  }

  items[itemCount] = newItem;
  itemCount++;
  
  return true;
}

int findItemByName(const InventoryItem items[], int itemCount, const string& name)
{
  for (int i = 0; i < itemCount; i++)
  {
    if (isSameName(items[i].getName(), name))
    {
      return i;
    }
  }

  return -1;
}

void displayItems(const InventoryItem items[], int itemCount)
{
  if (itemCount == 0)
  {
    cout << "Каталог пуст.\n";
    return;
  }

  cout << "\n========== СПИСОК ТОВАРОВ ==========\n";

  for (int i = 0; i < itemCount; i++)
  {
    cout << "\nТовар №" << i + 1 << '\n'
    << "Название: " << items[i].getName() << '\n'
    << "Цена: " << items[i].getPrice() << '\n'
    << "Количество: " << items[i].getQuantity() << '\n'
    << "Общая стоимость: " << items[i].getTotalValue() << '\n'
    ;
  }

  cout << "\n====================================\n";
}

bool removeItem(InventoryItem items[], int& itemCount, const string& name)
{
  int index = findItemByName(items, itemCount, name);

  if (index == -1)
  {
    return false;
  }

  for (int i = index; i < itemCount - 1; i++)
  {
    items[i] = items[i + 1];
  }

  itemCount--;

  return true;
}

double calculateTotalValue(const InventoryItem items[], int itemCount)
{
  double totalValue = 0.0;

  for (int i = 0; i < itemCount; i++)
  {
    totalValue += items[i].getTotalValue();
  }

  return totalValue;
}

int main()
{
  InventoryItem items[100];
  int itemCount = 0;
  int choice = -1;

  string newName;
  double newPrice;
  int amount;
  string searchName;
  string name;

  while (choice != 0)
  {
    Menu();
    
    if (!(cin >> choice))
    {
      cout << "Ошибка: введите номер команды.\n";
      cin.clear();
      cin.ignore(10000, '\n');
      continue;
    }

    switch (choice)
    {
    case 1:
      cout << "Введите название товара: ";

      if (!(cin >> newName))
      {
        cout << "Ошибка: некорректное название.\n";
        cin.clear();
        cin.ignore(10000, '\n');
        break;
      }

      cout << "Введите цену товара: ";

      if (!(cin >> newPrice))
      {
        cout << "Ошибка: цена должна быть числом.\n";
        cin.clear();
        cin.ignore(10000, '\n');
        break;
      }

      cout << "Введите количество товара: ";

      if (!(cin >> amount))
      {
        cout << "Ошибка: количество должно быть целым числом.\n";
        cin.clear();
        cin.ignore(10000, '\n');
        break;
      }

      if (addItem(items, itemCount, newName, newPrice, amount))
      {
        cout << "Товар успешно добавлен.\n";
      }
      break;

    case 2:
      {
        cout << "Введите название товара: ";
        cin >> searchName;

        int index = findItemByName(items, itemCount, searchName);

        if (index != -1)
        {
          cout << "\nТовар найден:\n";
          cout << "Название: " << items[index].getName() << '\n';
          cout << "Цена: " << items[index].getPrice() << '\n';
          cout << "Количество: " << items[index].getQuantity() << '\n';
          cout << "Общая стоимость: " << items[index].getTotalValue() << '\n';
        }else
        {
          cout << "Товар не найден.\n";
        }
        break;
      }

    case 3:
      cout << "Введите название товара для удаления: ";
      cin >> name;

      if (removeItem(items, itemCount, name))
      {
        cout << "Товар успешно удалён.\n";
      }
      else
      {
        cout << "Товар не найден.\n";
      }

      break;

    case 4:
      displayItems(items, itemCount);
      break;

    case 5:
      cout << "\nОбщая стоимость каталога: " << calculateTotalValue(items, itemCount) << '\n';
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