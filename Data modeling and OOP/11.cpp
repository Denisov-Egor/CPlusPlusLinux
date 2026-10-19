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
  Product* productPtr = product;
  
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
    cout << "Название: " << productPtr->name << '\n';
    cout << "Цена: " << productPtr->price << '\n';
    cout << "Количество: " << productPtr->quantity << '\n';
    productPtr++;
  }

  productPtr = product;

  cout << "Количество до изменения: " << productPtr->quantity << '\n';

  productPtr->quantity += 5;

  cout << "Количество после изменения: " << productPtr->quantity << '\n';
  
}