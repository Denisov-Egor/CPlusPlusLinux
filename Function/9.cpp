#include <iostream>

using namespace std;

int max2(int a, int b)
{
  if (a > b)
  {
    return a;
  }else
  {
    return b;
  }
}

int max3(int a, int b, int c)
{
  int temp = max2(a, b);

  return max2(temp, c);
}

int main()
{
  int a, b, c;

  cin >> a >> b >> c;

  cout << max3(a, b, c);
}