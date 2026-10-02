#include <iostream>

using namespace std;

void findMin(int* ptr, int size, int* min)
{
  for (int i = 0; i < size; i++)
  {
    if (*(ptr + i) < *min)
    {
      *min = *(ptr + i);
    }
  }
  
}

int main()
{
  int arr[5] = {10, 4, 25, 7, 2};
  int min = arr[0];
  
  int* ptr = arr;

  findMin(ptr, 5, &min);

  cout << min;

}