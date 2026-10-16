#include <iostream>

using namespace std;

int main()
{
  int arr[3][3];

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cin >> arr[i][j];
    }
  }

  int max = arr[0][1];

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if (j > i && arr[i][j] > max)
      {
        max = arr[i][j];
      }
    }
  }
  
  cout << max;
  
}