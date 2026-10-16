#include <iostream>

using namespace std;

int findElement(int* ptr, int size, int value)
{
  if (ptr == nullptr || size <= 0)
  {
    return -1;
  }
  
  for (int i = 0; i < size; i++)
  {
    if (*(ptr + i) == value)
    {
      return i;
    }
  }

  return -1;
}

int main()
{
  int arr[5] = {10, 20, 30, 40, 50};
  int* ptr = arr;

  cout << findElement(arr, 5, 30) << endl;  
  cout << findElement(arr, 5, 100) << endl;
  cout << findElement(nullptr, 5, 30) << endl;
  cout << findElement(arr, 0, 30) << endl;

}