#include <iostream>
#include <string>

using namespace std;

struct Product
{
  string name;
  double price;
  int quantity;
};


int main()
{
  Product product;

  getline(cin, product.name);
  cin >> product.price;
  cin >> product.quantity;

  cout << product.name;
  cout << product.price;
  cout << product.quantity;

  double totalCost = product.price * product.quantity;

  cout << totalCost;

}