#include <iostream>

using namespace std;

int main()
{
  int arr[3][4];

  int maxCount = 0;
  int maxCol = 0;

  int minCount = 100;
  int minCol = 0;

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      cin >> arr[i][j];
    }
  }
  
  for (int j = 0; j < 4; j++)
  {
    int count = 0;

    for (int i = 0; i < 3; i++)
    {
      if (arr[i][j] > 0)
      {
        count++;
      }
    }
    if (count > maxCount)
    {
      maxCount = count;
      maxCol = j;
    }
  }

  for (int j = 0; j < 4; j++)
  {
    int count = 0;

    for (int i = 0; i < 3; i++)
    {
      if (arr[i][j] < 0)
      {
        count++;
      }  
    }
    if (count < minCount)
    {
      minCount = count;
      minCol = j;
    }
  }
  
  cout << maxCol;
  cout << minCol;
}