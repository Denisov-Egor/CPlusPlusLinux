#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  while (true)
  {
    double a, b;
    double res = 0;

    char c;

    cout << "Введите первое число: ";
    cin >> a;

    cout << "Введите знак операции (+, -, *, /, %, ^, s - корень, q - выход): ";
    cin >> c;

     if (c == 'q' || c == 'Q')
      {
        break;
      }

    if (c == 's' || c == 'S')
    {
      if (a < 0)
      {
        cout << "Ошибка: корень из отрицательного числа!" << endl;
      }else {
              res = sqrt(a);
              cout << "√" << a << " = " << res << endl;
            }
      continue;
    }

    cout << "Введите второе число: ";
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
      if (b == 0)
      {
        cout << "Ошибка: деление на ноль!" << endl;
      }else
      {
        res = a / b;
        cout << res << endl; 
      }
      break;
      
    case '%':
      if (b == 0)
      {
        cout << "Ошибка: деление на ноль!" << endl;
      }else
      {
        res = fmod(a, b);
        cout << res << endl; 
      }
      break;

    case '^':
      res = pow(a, b);
      cout << res << endl;
      break;

    default:
    cout << "Неизвестный оператор!" << endl;
      break;
    }
  }
}