#include <iostream>
#include <string>
#include <limits>

using namespace std;

enum class OrderStatus
{
  New,
  Processing,
  Shipped,
  Delivered
};

struct Order
{
  int id;
  double totalPrice;
  OrderStatus status;
};

int main()
{
  Order order[5];
  string statusInput;
  string newStatusInput;
  int id;
  bool found = false;

  for (int i = 0; i < 5; i++)
  {
    cout << "Заказ №: " << i + 1 << '\n';

    cout << "Введите идентификатор: ";
    cin >> order[i].id;

    cout << "Введите цену: ";
    cin >> order[i].totalPrice;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Введите статус: ";
    getline(cin, statusInput);

    if (statusInput == "новый")
    {
      order[i].status = OrderStatus::New;
    }
    else if (statusInput == "в обработке")
    {
      order[i].status = OrderStatus::Processing;
    }
    else if (statusInput == "отправлен")
    {
      order[i].status = OrderStatus::Shipped;
    }
    else if (statusInput == "доставлен")
    {
      order[i].status = OrderStatus::Delivered;
    }
    else
    {
      cout << "Такого статуса нет\n";
      return 1;
    }

    cout << '\n';
  }

  cout << "Введите ID заказа: ";
  cin >> id;

  for (int i = 0; i < 5; i++)
  {
    if (order[i].id == id)
    {
      found = true;

      cout << "\nНайден заказ\n";
      cout << "ID: " << order[i].id << '\n';
      cout << "Стоимость: " << order[i].totalPrice << '\n';

      cout << "Текущий статус: ";

      if (order[i].status == OrderStatus::New)
      {
        cout << "новый\n";
      }
      else if (order[i].status == OrderStatus::Processing)
      {
        cout << "в обработке\n";
      }
      else if (order[i].status == OrderStatus::Shipped)
      {
        cout << "отправлен\n";
      }
      else if (order[i].status == OrderStatus::Delivered)
      {
        cout << "доставлен\n";
      }

      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      cout << "Введите новый статус: ";
      getline(cin, newStatusInput);

      if (newStatusInput == "новый")
      {
        order[i].status = OrderStatus::New;
      }
      else if (newStatusInput == "в обработке")
      {
        order[i].status = OrderStatus::Processing;
      }
      else if (newStatusInput == "отправлен")
      {
        order[i].status = OrderStatus::Shipped;
      }
      else if (newStatusInput == "доставлен")
      {
        order[i].status = OrderStatus::Delivered;
      }
      else
      {
        cout << "Ошибка: такого статуса нет\n";
        break;
      }

      cout << "\nСтатус заказа успешно изменён.\n";
      cout << "ID: " << order[i].id << '\n';
      cout << "Новый статус: ";

      if (order[i].status == OrderStatus::New)
      {
        cout << "новый\n";
      }
      else if (order[i].status == OrderStatus::Processing)
      {
        cout << "в обработке\n";
      }
      else if (order[i].status == OrderStatus::Shipped)
      {
        cout << "отправлен\n";
      }
      else if (order[i].status == OrderStatus::Delivered)
      {
        cout << "доставлен\n";
      }

      break;
    }
  }

  if (!found)
  {
    cout << "Заказ не найден\n";
  }

}