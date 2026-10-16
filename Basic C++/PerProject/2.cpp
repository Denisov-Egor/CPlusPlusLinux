#include <iostream>

using namespace std;

int main()
{
  char a;

  double num;

  double m = 0.1, mm = 10, km = 100000;
  double res;

  cout << "Введите число в сантиметрах: ";
  cin >> num;

  cout << "Выберети в какую ситсему надо первести число: ";
  cin >> a;

  switch (a)
  {
  case '1':
    res = num * m;
    cout << res;
    break;
  case '2':
    res = num * mm;
    cout << res;
    break;
  case '3':
    res = num * km;
    cout << res;
    break;
  
  default:
    break;
  }

  
}