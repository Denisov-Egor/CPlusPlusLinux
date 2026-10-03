#include <iostream>

using namespace std;

void printArray(int* ptr, int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << *ptr << ' ';
    ptr++;
  }
  
}

int main()
{
  int arr[5] = {10, 20, 30, 40, 50};
  int* ptr = arr;

  printArray(ptr, 5);

}