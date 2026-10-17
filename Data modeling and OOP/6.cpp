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
  string search;
  bool found = false;

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

  cout << "Введите имя товара для поиска : ";

  getline(cin, search);
  
  for (int i = 0; i < 3; i++)
  {
    if (product[i].name == search)
    {
      found = true;
      cout << "Товар найден: " << '\n';

      cout << "\nТовар №" << i + 1 << '\n';

      cout << "Название: " << product[i].name << '\n';

      cout << "Цена: " << product[i].price << '\n';

      cout << "Количество: " << product[i].quantity << '\n';

      break;
    }
  }
  if (!found)
  {
    cout << "Такого товара нет:";
  } 

}