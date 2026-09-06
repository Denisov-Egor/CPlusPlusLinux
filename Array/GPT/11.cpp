#include <iostream>

using namespace std;

int countAboveAverage(int arr[], int size)
{
  double average = 0;
  int count = 0;
  double sum = 0;

  for (int i = 0; i < size; i++)
  {
    sum += arr[i];
    average = sum / size;
  }

  for (int i = 0; i < size; i++)
  {
    if (arr[i] > average)
    {
      count++;
    }
  }
  return count;
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

  int count = countAboveAverage(arr, size);
  cout << count;
}
