#include <iostream>

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
  int statusNumber;
  Order order[3];

  for (int i = 0; i < 3; i++)
  {
    cout << "Введите номер заказа: ";
    cin >> order[i].id;

    cout << "Введите цену: ";
    cin >> order[i].totalPrice;
  
    cout << "Введите статус заказа (от 1 до 4): ";
    cin >> statusNumber;

    switch (statusNumber)
    {
    case 1:
      order[i].status = OrderStatus::New;
    break;
    
    case 2:
      order[i].status = OrderStatus::Processing;
    break;

    case 3:
      order[i].status = OrderStatus::Shipped;
    break;

    case 4:
      order[i].status = OrderStatus::Delivered;
    break;

    default:
      cout << "Не верный номер: ";
      return 0;
    }
  }
  
  for (int i = 0; i < 3; i++)
  {
    cout << "Заказ №" << order[i].id << '\n';
    cout << "Сумма: " << order[i].totalPrice << '\n';

    switch (order[i].status)
    {
    case OrderStatus::New:
      cout << "Статус: Новый\n";
    break;

    case OrderStatus::Processing:
      cout << "Статус: В процессе\n";
    break;

    case OrderStatus::Shipped:
      cout << "Статус: Отправленный\n";
    break;

    case OrderStatus::Delivered:
      cout << "Статус: Доставлен\n";
    break;
    
    default:
      break;
    }
  }
  

}