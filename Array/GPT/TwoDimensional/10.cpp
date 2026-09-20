#include <iostream>

using namespace std;

int main()
{
  int search;
  bool found = false;

  int foundRow;
  int foundCol;

  int arr[3][4];

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      cin >> arr[i][j];
    }
  }

  cout << "Введите искомое число: ";
  cin >> search;

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      if (arr[i][j] == search)
      {
        found = true;

        foundRow = i;
        foundCol = j;
      }
    }
  }

  if (found)
  {
    cout << foundRow;
    cout << foundCol;
  }else
  {
    cout << "Такого эл нет";
  }  

}