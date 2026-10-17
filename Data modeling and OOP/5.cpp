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
  double totalCatalogCost = 0;
  Product product[3];

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
    cout << "\nТовар №" << i + 1 << '\n';

    cout << "Название: " << product[i].name << '\n';

    cout << "Цена: " << product[i].price << '\n';

    cout << "Количество: " << product[i].quantity << '\n';

    double itemCost = product[i].price * product[i].quantity;
    cout << "Стоимость запаса: " << itemCost << '\n';
    totalCatalogCost += itemCost;

  }
  cout << "Общая стоимость каталога: " << totalCatalogCost << '\n';
}