#include <iostream>

using namespace std;

int findMax(int* ptr, int size)
{
  int max = *ptr;

  for (int i = 0; i < size; i++)
  {
    if (*(ptr + i) > max)
    {
      max = *(ptr + i);
    }
  }
  
  return max;
}

int main()
{
  int arr[5] = {10, 4, 25, 7, 2};
  int* ptr = arr;
  
  int result = findMax(ptr, 5);

  cout << result;

}