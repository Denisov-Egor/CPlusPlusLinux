#include <iostream>

using namespace std;

int max(int a, int b)
{
  if (a > b)
  {
    return a;
  }else{
    return b;
  }
}

int main()
{
  int a, b;
  int Max;

  cin >> a >> b;

  Max = max(a, b);

  cout << Max;
}