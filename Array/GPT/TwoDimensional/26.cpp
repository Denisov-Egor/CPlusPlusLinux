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
  
  int min = arr[0][2];
  
  for (int i = 0; i < 3; i++)
  {
    if (arr[i][2 - i] < min)
    {
      min = arr[i][2 - i];
    }
  }

  cout << min;
  
}