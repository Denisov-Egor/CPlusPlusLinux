#include <iostream>
#include <string>

using namespace std;

void showMenu()
{
  cout << R"(

  ===== ORDER MANAGEMENT =====
  
  1. Оплатить заказ
  2. Начать обработку
  3. Завершить заказ
  4. Отменить заказ
  0. Выход

  Выберите действие: 

  )";
}

enum class OrderStatus
{
  Created,
  Paid,
  Processing,
  Completed,
  Cancelled
};

class Order
{
  private:
  OrderStatus status = OrderStatus::Created;
  public:
  OrderStatus getStatus() const
  {
    return status;
  }
  
  friend bool transitionOrder(Order& order, OrderStatus newStatus);
};

bool transitionOrder(Order& order, OrderStatus newStatus)
{
  switch (order.status)
  {
  case OrderStatus::Created:
    if (newStatus == OrderStatus::Paid || newStatus == OrderStatus::Cancelled)
    {
      order.status = newStatus;
      return true;
    }
    break;

  case OrderStatus::Paid:
    if (newStatus == OrderStatus::Processing || newStatus == OrderStatus::Cancelled)
    {
      order.status = newStatus;
      return true;
    }
    break;
  
  case OrderStatus::Processing:
    if (newStatus == OrderStatus::Completed)
    {
      order.status = newStatus;
      return true;
    }
    break;
  
  case OrderStatus::Completed:
  case OrderStatus::Cancelled:
    return false;
  }

  return false;
}

string getStatusName(OrderStatus status)
{
  switch (status)
  {
  case OrderStatus::Created:
    return "Created";

  case OrderStatus::Paid:
    return "Paid";
  
  case OrderStatus::Processing:
    return "Processing";

  case OrderStatus::Completed:
    return "Completed";

  case OrderStatus::Cancelled:
    return "Cancelled";
  }

  return "Unknown";
}

int main()
{
  Order order;
  int choice;

  do
  {
    cout << "\nТекущий статус: " << getStatusName(order.getStatus()) << '\n';
    showMenu();

    cin >> choice;
    OrderStatus newStatus;
    
    switch (choice)
    {
    case 1:
      newStatus = OrderStatus::Paid;
      break;

    case 2:
      newStatus = OrderStatus::Processing;
      break;

    case 3:
      newStatus = OrderStatus::Completed;
      break;

    case 4:
      newStatus = OrderStatus::Cancelled;
      break;

    case 0:
      cout << "Выход из программы.\n";
      continue;

    default:
      cout << "Неизвестная команда.\n";
      continue;
    }

    if (transitionOrder(order, newStatus))
    {
      cout << "Статус успешно изменён.\n";
    }else
    {
      cout << "Недопустимый переход состояния!\n";
    }
  } while (choice != 0);

    return 0;

}