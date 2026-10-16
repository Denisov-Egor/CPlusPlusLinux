#include <iostream>

using namespace std;

int findElement(int* ptr, int size, int value)
{
  for (int i = 0; i < size; i++)
  {
    if (value == *(ptr + i))
    {
      return i;
    }
  }

  return -1;
}

int main()
{
  int arr[6] = {10, 25, 7, 42, 15, 3};
  int* ptr = arr;
  int value;

  cin >> value;

  int result = findElement(ptr, 6, value);

  cout << result;
}