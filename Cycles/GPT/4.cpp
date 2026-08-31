#include <iostream>

using namespace std;

int main()
{
  int n;
  int res = 1;

  cin >> n;

  for (int i = 1; i <= 10; i++)
  {
    res = n * i;
    cout << n << '*' << i << '=' << res << endl;
  }
  
}