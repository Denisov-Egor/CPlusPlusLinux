#include <iostream>

using namespace std;

int main()
{
  int arr[3][4];

  int maxElementRow = 0;
  int maxElementCol = 0;

  int minElementRow = 0;
  int minElementCol = 0;  

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      cin >> arr[i][j];
    }
  }

  int max = arr[0][0];
  int min = arr[0][0];
  
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      if (arr[i][j] > max)
      {
        max = arr[i][j];
        maxElementRow = i;
        maxElementCol = j;
      }
    }    
  }

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      if (arr[i][j] < min)
      {
        min = arr[i][j];
        minElementRow = i;
        minElementCol = j;
      }
    }
    
  }

  cout << max << maxElementRow << maxElementCol;

  cout << "--------------";

  cout << min << minElementRow << minElementCol;

}