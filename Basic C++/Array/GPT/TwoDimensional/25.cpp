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
  
  int max = arr[0][0];

  for (int i = 0; i < 3; i++)
  {
    if (arr[i][i] > max)
    {
      max = arr[i][i];      
    }
  }

  cout << max;
  
  
}