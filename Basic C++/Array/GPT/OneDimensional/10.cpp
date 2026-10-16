#include <iostream>

using namespace std;

int findMinIndex(int arr[], int size)
{
  int minIndex = 0;
  
  for (int i = 0; i < size; i++)
  {
    if (arr[i] < arr[minIndex])
    {
      minIndex = i;
    }
  }
  return minIndex;
}

int main()
{
  int size;

  cin >> size;

  int arr[size];

  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }

  int minIndex = findMinIndex(arr, size);

  cout << minIndex << endl;
}