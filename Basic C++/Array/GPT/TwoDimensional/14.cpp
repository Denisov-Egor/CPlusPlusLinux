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

  int maxSum = arr[0][0];
  int maxRow = 0;

  for (int i = 0; i < 3; i++)
  {
    int sum = 0;
    for (int j = 0; j < 4; j++)
    {
      sum += arr[i][j];
    }
    if (sum > maxSum)
    {
      maxSum = sum;
      maxRow = i;
    }
  }
  cout << maxRow << maxSum;
  
}