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
  string foundInput;
  int foundCount = 0;
  OrderStatus searchStatus;

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

  cout << "Введите статус заказа для поиска";
  getline(cin, foundInput);

  if (foundInput == "новый")
  {
    searchStatus = OrderStatus::New;
  }else if (foundInput == "в обработке")
  {
    searchStatus = OrderStatus::Processing;
  }else if (foundInput == "отправлен")
  {
    searchStatus = OrderStatus::Shipped;
  }else if (foundInput == "доставлен")
  {
    searchStatus = OrderStatus::Delivered;
  }else
  {
    cout << "Такого статуса нет\n";
    return 1;
  }

  cout << "\nРезультаты поиска:\n";

  for (int i = 0; i < 5; i++)
  {
    if (order[i].status == searchStatus)
    {
      cout << "ID заказа: " << order[i].id << '\n';
      cout << "Стоимость: " << order[i].totalPrice << '\n';
      
      foundCount++;
    }
  }
  
   if (foundCount == 0)
   {
     cout << "Заказы с таким статусом не найдены\n";
   }else
   {
     cout << "Всего найдено заказов: " << foundCount << '\n';
   }
}