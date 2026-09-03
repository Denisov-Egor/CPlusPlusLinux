#include <iostream>

using namespace std;

void print(int value)
{
  cout << "int: " << value << '\n';
}
void print(double value)
{
  cout << "double: " << value << '\n';
}
void print(string value)
{
  cout << "string: " << value << '\n';
}

int main()
{
  int a;
  double b;
  string c;

  cin >> a;

  print(a);

  cin >> b;

  print(b);

  cin >> c;

  print(c);
}