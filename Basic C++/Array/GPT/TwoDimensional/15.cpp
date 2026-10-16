#include <iostream>

using namespace std;

int main()
{
  int arr[3][4];

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      cin >> arr[i][j];
    }
  }

  int minSum = arr[0][0];
  int minRow = 0;

  for (int i = 0; i < 3; i++)
  {
    int sum = 0;
    for (int j = 0; j < 4; j++)
    {
      sum += arr[i][j];
    }
    if (sum < minSum)
    {
      minSum = sum;
      minRow = i;
    }
  } 

  cout << minRow << minSum;
  
  
}