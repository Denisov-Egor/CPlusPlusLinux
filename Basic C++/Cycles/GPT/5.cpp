#include <iostream>

using namespace std;

int main()
{
  int n;
  int res = 0;

  cin >> n;

  for (int i = 1; i <= 10; i++)
  {
    for (int j = 1; j <= 10; j++)
    {
      res = i * j;
      cout << res << ' ';
    }
    cout << endl;
  }
  
}