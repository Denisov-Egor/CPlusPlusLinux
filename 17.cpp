#include <iostream>

using namespace std;

double res(double a, double b)
{
  int result = a * b;
  return result;
}

int main()
{
  int a, b;
  cin >> a >> b;

  double ress = res(a, b);
  cout << ress;
}