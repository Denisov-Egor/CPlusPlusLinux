#include <iostream>
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
  int newCount = 0;
  int processingCount = 0;
  int shippedCount = 0;
  int deliveredCount = 0;
  string statusInput;
  
  for (int i = 0; i < 5; i++)
  {
    cout << "Заказ №: " <<  i + 1 << '\n';
    
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
    }else if (statusInput == "в обработке")
    {
      order[i].status = OrderStatus::Processing;
    }else if (statusInput == "отправлен")
    {
      order[i].status = OrderStatus::Shipped;
    }else if (statusInput == "доставлен")
    {
      order[i].status = OrderStatus::Delivered;
    }else
    {
      cout << "Такого статуса нет";
      return 1;
    }
  }

  for (int i = 0; i < 5; i++)
  {
    switch (order[i].status)
    {
    case OrderStatus::New:
      newCount++;
    break;
    
    case OrderStatus::Processing:
      processingCount++;
    break;

    case OrderStatus::Shipped:
      shippedCount++;
    break;

    case OrderStatus::Delivered:
      deliveredCount++;
    break;

    default:
      break;
    }
  }

  cout << newCount << '\n'
  << processingCount << '\n'
  << shippedCount << '\n'
  << deliveredCount << '\n';
  
}