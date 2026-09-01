#include <iostream>

using namespace std;

int max(int a, int b, int c)
{
  if (a >= b && a >= c)
  {
    return a;
  }else if (b >= a && b >= c)
  {
    return b;
  }else
  {
    return c;
  }
}

int main()
{
  int a, b, c;
  int Max;

  cin >> a >> b >> c;

  Max = max(a, b, c);

  cout << Max;
}