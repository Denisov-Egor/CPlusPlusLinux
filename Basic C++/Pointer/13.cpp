#include <iostream>

using namespace std;

double averageArray(int* ptr, int size)
{
  int sum = 0;

  for (int i = 0; i < size; i++)
  {
    sum += *(ptr + i);
  }
  
  return double(sum) / size;
}

int main()
{
  int arr[5] = {10, 20, 30, 40, 50};
  int* ptr = arr;

  double result = averageArray(ptr, 5);

  cout << result;
}