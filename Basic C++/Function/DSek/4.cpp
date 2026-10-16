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
  int a, b;

  cin >> a >> b;

  int res = power(a, b);

  cout << res;
}