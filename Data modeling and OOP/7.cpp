#include <iostream>
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
  int maxIndex = 0;
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

  for (int i = 1; i < 3; i++)
  {
    if (product[i].price > product[maxIndex].price)
    {
      maxIndex = i;
    }
  }
  
  cout << product[maxIndex].name << '\n';
  cout << product[maxIndex].price << '\n';
  cout << product[maxIndex].quantity << '\n';
}