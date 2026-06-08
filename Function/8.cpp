#include <iostream>

using namespace std;

int max2(int a, int b)
{
  if (a > b)
  {
    return 1;
  }else
  {
    return 0;
  }
}

int main()
{
  int a, b;

  cin >> a >> b;

  if (max2(a, b))
  {
    cout << '>';
  }else
  {
    cout << '<';
  }
}