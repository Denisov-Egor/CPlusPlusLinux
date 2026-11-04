#include <iostream>

using namespace std;

int main()
{
  int arr[100][100][3];;

  for (int i = 0; i < 100; i++)
  {
    for (int j = 0; j < 100; j++)
    {
      arr[i][j][0] = 1;
    }
  }

  for (int i = 0; i < 100; i++)
  {
    for (int j = 0; j < 100; j++)
    {
      for (int k = 1; k < 3; k++)
      {
        arr[i][j][k] = arr[i][j][k - 1] + 1;
      }
    }
  }

  for (int i = 0; i < 100; i++)
  {
    for (int j = 0; j < 100; j++)
    {
      for (int k = 1; k < 3; k++)
      {
        cout << arr[i][j][k] << ' ';
      }
      cout << endl;
    }
  }
  
  
}