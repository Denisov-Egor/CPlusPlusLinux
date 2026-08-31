#include <iostream>

using namespace std;

int main()
{
  int a;
  int b, res;

  cin >> a >> b;

  switch (a)
  {
  case 1:
    res = b + 1;
    cout << res;
    break;
  case 2:
    res = b + 2;
    cout << res;
    break;
  case 3:
    res = b + 3;
    cout << res;
    break;
  
  default:
  cout << "dfsfs";
    break;
  }
}