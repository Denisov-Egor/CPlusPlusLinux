// Создайте программу, которая будет выводить таблицу умножения для заданного числа, например, от 1 до 10.

#include <iostream>

using namespace std;

int main()
{
  int a, res;

  cin >> a;

  for (int i = 1; i <= 10; i++)
  {
    res = a * i;
    cout << res << endl;
  }
  
  
}