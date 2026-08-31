#include <iostream>

using namespace std;

int main()
{
  int n, res = 0;

  cin >> n;

  while (n != 0) 
  {
    res += n;
    cin >> n;
  } 
  cout << res;
}