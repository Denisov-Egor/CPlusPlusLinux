#include <iostream>

using namespace std;

int calculateSum(int* arr, int size)
{
  int sum = 0;

  for (int i = 0; i < size; i++)
  {
    sum += arr[i];
  }

  return sum;
}

int main()
{
  int size;

  cin >> size;

  int* arr = new int[size];

  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  
  int sum = calculateSum(arr, size);

  cout << sum;

  delete[] arr;
  arr = nullptr;
}