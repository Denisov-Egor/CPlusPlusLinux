#include <iostream>

using namespace std;

int main()
{
  int arr[3][4];

  int sum = 0;
  double average = 0;
  int count = 0;

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
      sum += arr[i][j];
      average = sum / 12.0;
    }
  }
  
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      if (arr[i][j] > average)
      {
        count++;
      }
    }
  }
  
  cout << count;
}