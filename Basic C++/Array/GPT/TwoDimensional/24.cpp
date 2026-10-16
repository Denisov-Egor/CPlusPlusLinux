#include <iostream>

using namespace std;

int main()
{
  int arr[3][3];

  int sum = 0;

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cin >> arr[i][j];
    }
  }

  for (int i = 0; i < 3; i++)
  {
    sum += arr[i][2 - i];
  }
  
  cout << sum;
  
}