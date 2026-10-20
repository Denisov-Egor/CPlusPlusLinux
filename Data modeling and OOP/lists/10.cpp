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

void receiveProduct(Product& product, int amount)
{
  product.quantity += amount;

  cout << "Название: " << product.name << '\n';
  cout << "Цена: " << product.price << '\n';
  cout << "Количество: " << product.quantity << '\n';
}

int main()
{
  int amount;
  int number;
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
  
    cout << "Введите номер товара: ";
    cin >> number;
  
    if (number < 1 || number > 3)
    {
      cout << "Такого товара нет";
      return 0;
    }
  
  cout << "Введите кол-во товара поступившее на склад: ";
  cin >> amount;

  receiveProduct(product[number - 1], amount);
  
}