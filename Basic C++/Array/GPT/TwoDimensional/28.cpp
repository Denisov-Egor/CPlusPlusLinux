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

  for (int j = 0; j < 4; j++)
  {
    int count = 0;
    for (int i = 0; i < 3; i++)
    {
      if (arr[i][j] < 0)
      {
        count++;
      }
    }
    cout << count;
  }
  
  
}