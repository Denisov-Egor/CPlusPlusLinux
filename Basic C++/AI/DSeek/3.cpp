//  Напишите программу-конвертер валют из одной системы (например, доллары) в другую (например, евро). Добавьте возможность выбора направления конвертации.
#include <iostream>

using namespace std;

int main()
{
  double c, res;
  char s;
  
  cin >> c;
  cin >> s;

  switch (s)
  {
  case '$':
    res = c * 100;
    cout << res;
    break;
    case '1':
    res = c * 200;
    cout << res;
    break;
  
  default:
    break;
  }
}