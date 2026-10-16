#include <iostream>

using namespace std;

int main()
{
  double a, b, res;
  char c;

  cin >> a;
  cin >> c;
  cin >> b;

  switch (c)
  {
  case '+':
    res = a + b;
    cout << res;
    break;
   case '-':
    res = a - b;
    cout << res;
    break;
 case '*':
    res = a * b;
    cout << res;
    break;
     case '/':
    res = a / b;
    cout << res;
    break;
  default:
    break;
  }
}