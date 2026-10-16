#include <iostream>

using namespace std;

int main()
{
  int res;
  int a, b;
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
  cout << "Hello";
    break;
  }
}