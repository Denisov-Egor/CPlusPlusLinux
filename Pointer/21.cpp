#include <iostream>

using namespace std;

void replaceNegative(int* ptr, int size)
{
  for (int i = 0; i < size; i++)
  {
    if (*(ptr + i) < 0)
    {
      *(ptr + i) = 0;
    }
  }
  
}

int main()
{
  int arr[7] = {-5, 10, -3, 7, -8, 4, -1};  
  int* ptr = arr;

  replaceNegative(ptr, 7);

  for (int i = 0; i < 7; i++)
  {
    cout << *(ptr + i);
  }
  

}