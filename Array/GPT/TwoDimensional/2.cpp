#include <iostream>

using namespace std;

int main()
{
  int sum = 0;

  int arr[3][4];

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
      sum +=arr[i][j];
    }
  }
  cout << sum << endl;
  
}