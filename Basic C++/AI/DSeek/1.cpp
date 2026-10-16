// Напишите программу-калькулятор, которая будет выполнять арифметические операции (+, -, *, /) в зависимости от выбора пользователя.
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
    cout << res << endl;
    break;
    case '-':
    res = a - b;
    cout << res << endl;
    break;
    case '*':
    res = a * b;
    cout << res << endl;
    break;
    case '/':
    res = a / b;
    cout << res << endl;
    break;
  
  default:
    break;
  }
}