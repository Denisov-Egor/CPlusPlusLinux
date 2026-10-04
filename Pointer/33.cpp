#include <iostream>

using namespace std;

void increaseArray(int* ptr, int size, int value)
{
  if (ptr == nullptr || size <= 0)
  {
    return;
  }

  for (int i = 0; i < size; i++)
  {
    *(ptr + i) += value;
  }  
}

int main()
{
  int arr[5] = {10, 20, 30, 40, 50};
  int* ptr = arr;

  increaseArray(arr, 5, 10);
  increaseArray(nullptr, 5, 10);
  increaseArray(arr, 0, 10);

  for (int i = 0; i < 5; i++)
  {
    cout << *(arr + i) << " ";
  }
}