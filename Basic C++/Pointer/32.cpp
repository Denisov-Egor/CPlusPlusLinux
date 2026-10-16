#include <iostream>

using namespace std;

int findMax(int* ptr, int size)
{
  if (ptr == nullptr || size <= 0)
  {
    return 0;
  }
  
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
  int arr[5] = {10, 25, 7, 40, 15};

  cout << findMax(arr, 5) << endl;
  cout << findMax(nullptr, 5) << endl;
  cout << findMax(arr, 0) << endl;
}