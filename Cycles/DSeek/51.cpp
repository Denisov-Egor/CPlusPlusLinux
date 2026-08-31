#include <iostream>

using namespace std;

int main()
{
  int symbolCount;
  int LineType;
  char sybols;
  int index = 0;

  cout << "Введите кол-во символов в строке:";
  cin >> symbolCount;

  cout << "Введите символ:";
  cin >> sybols;

  cout << "Выберети тип линии 1 или 2:";

  cin >> LineType;

  while (index < symbolCount)
  {
    index++;

    if (LineType == 1)
    {
      cout << sybols << endl;
    }else
    {
      cout << sybols;
    }
  }
}