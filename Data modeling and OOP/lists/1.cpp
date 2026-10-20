#include <iostream>
#include <string>

using namespace std;

struct Product
{
  int id = 101;
  string name = "Keyboard";
  int quantity = 12;
  double price = 2500;
};

int main()
{
  Product product;

  cout << product.id << '\n';
  cout << product.name << '\n';
  cout << product.quantity << '\n';
  cout << product.price << '\n';

  cout << "-------- \n";

  product.id = 102;
  product.name = "Keyboard2";
  product.quantity = 15;
  product.price = 3000;

  cout << product.id << '\n';
  cout << product.name << '\n';
  cout << product.quantity << '\n';
  cout << product.price << '\n';
}