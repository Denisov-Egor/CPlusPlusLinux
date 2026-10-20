#include <iostream>
#include <limits>

using namespace std;

struct Product
{
  string name;
  double price;
  int quantity;
};

void printProduct(Product product)
{
  cout << product.name << '\n';
  cout << product.price << '\n';
  cout << product.quantity << '\n';
}

int main()
{
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
    printProduct(product[i]);
  }
  

}