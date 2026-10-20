#include <iostream>
#include <string>
#include <limits>

using namespace std;

struct Product
{
  string name;
  double price;
  int quantity;
};

int main()
{
  Product product[3];
  int totalQuantity = 0;
  double totalValue = 0;
  int expensiveCount = 0;
  double totalPrice = 0;
  double averagePrice = 0;

  for (int i = 0; i < 3; i++)
  {
    cout << "Товар №: " <<  i + 1;

    cout << "Название: ";
    getline(cin, product[i].name);
    
    cout << "Цена: ";
    cin >> product[i].price;
    
    cout << "Количество: ";
    cin >> product[i].quantity;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
  }

  for (int i = 0; i < 3; i++)
  {
    totalQuantity += product[i].quantity;

    totalPrice += product[i].price;

    if (product[i].price > 100)
    {
      expensiveCount++;
    }

    totalValue += product[i].price * product[i].quantity;
  }
  averagePrice = totalPrice / 3;

  cout << "Общее количество товаров: " << totalQuantity << '\n';

  cout << "Общая стоимость склада: " << totalValue << '\n';

  cout << "Количество товаров дороже 100: " << expensiveCount << '\n';

  cout << "Средняя цена товара: " << averagePrice << '\n';

}