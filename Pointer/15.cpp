#include <iostream>

using namespace std;

int findMin(int* ptr, int size)
{
  int min = *ptr;

  for (int i = 0; i < size; i++)
  {
    if (*(ptr + i) < min)
    {
      min = *(ptr + i);
    }
  }

  return min;
}

int main()
{
  int arr[5] = {10, 4, 25, 7, 2};
  int* ptr = arr;

  int result = findMin(ptr, 5);

  cout << result;

}