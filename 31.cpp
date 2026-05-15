#include <iostream>

using namespace std;

int main()
{
  int n;
  int res = 0;

  cin >> n;

  for (int i = 0; i < n + 1; i++)
  {
    res += i;
  }
  cout << res << endl;
}

