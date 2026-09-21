#include <iostream>

using namespace std;

int main()
{
  int arr[3][4];

  int maxCount = 0;
  int maxRow = 0;

  int minCount = 100;
  int minRow = 0;

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      cin >> arr[i][j];
    }
  }

  for (int i = 0; i < 3; i++)
  {
    int count = 0;

    for (int j = 0; j < 4; j++)
    {
      if (arr[i][j] > 0)
      {
        count++;
      }
    }
    if (count > maxCount)
    {
      maxCount = count;
      maxRow = i;
    }
  }

  for (int i = 0; i < 3; i++)
  {
    int count = 0;

    for (int j = 0; j < 4; j++)
    {
      if (arr[i][j] < 0)
      {
        count++;
      }
    }
    if (count < minCount)
    {
      minCount = count;
      minRow = i;
    }   
  }  

  cout << maxRow;
  cout << minRow;  
}