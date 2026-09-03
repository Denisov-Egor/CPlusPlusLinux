#include <iostream>

using namespace std;

void print(int value)
{
  cout << value;
}

void print(double value)
{
  cout << value;
}

void print(string value)
{
  cout << value;
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