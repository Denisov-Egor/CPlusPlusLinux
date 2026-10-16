#include <iostream>

using namespace std;

int main()
{
  int arr[3][4];

  int sumPositive = 0;
  int sumNegative = 0;

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      cin >> arr[i][j];
    }    
  }

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      if (arr[i][j] > 0)
      {
        sumPositive += arr[i][j];
      }else if (arr[i][j] < 0) 
      {
        sumNegative += arr[i][j];
      } 
    }    
  }

  cout << sumPositive << sumNegative;  
  
}