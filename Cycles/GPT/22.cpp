#include <iostream>

using namespace std;

int main()
{
  bool hasDivisor = true;

  int n;

  cin >> n;

  for (int i = 1; i < n; i++)
  {
    if (n % i == 0)
    {
      hasDivisor = false;
      break;
    }
  }
  cout << boolalpha << hasDivisor;
}