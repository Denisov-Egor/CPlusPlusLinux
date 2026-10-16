#include <iostream>

using namespace std;

int main()
{
  int SIZE;
  cin >> SIZE;

  int max;
  int max2;

  int arr[SIZE];

  for (int i = 0; i < SIZE; i++)
  {
    cin >> arr[i];

  }

  max = arr[0];
  max2 = arr[0];

  for (int i = 0; i < SIZE; i++)
  {
    if (arr[i] > max)
    {
      max2 = max;
      max = arr[i];
    }else if (arr[i]> max2)
    {
      max2 = arr[i];
    }
    
  }
  cout << max << ' ' << max2;
}