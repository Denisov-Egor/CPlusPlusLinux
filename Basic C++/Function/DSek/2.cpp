#include <iostream>

using namespace std;

int power(int base, int exp)
{
  int res = 1;

  for (int i = 0; i < exp; i++)
  {
    res *= base;
  }
  return res;
}

int main()
{
  int n, exponent;

  cin >> n >> exponent;

  int res = power (n, exponent);

  cout << res;
}