#include <iostream>

using namespace std;

int main()
{
  int arr[3][4];

  int temp;

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      cin >> arr[i][j];
    }
  }
  
  for (int j = 0; j < 4; j++)
  {
    temp = arr[0][j];
    arr[0][j] = arr[2][j];
    arr[2][j] = temp;    
  }

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      cout << arr[i][j] << ' ';
    }
    cout << endl;
  }
  
  
}