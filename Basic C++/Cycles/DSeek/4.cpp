#include <iostream>

using namespace std;

int main()
{
  int n, res;

  cin >> n;

  for (int i = 0; i < 10; i++)
  {
    res = n * i;
    cout << res << endl;
  }
}