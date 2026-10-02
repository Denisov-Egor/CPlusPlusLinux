#include <iostream>

using namespace std;

int sumArray(int* ptr, int size)
{
  int sum = 0;

  for (int i = 0; i < size; i++)
  {
    sum += *(ptr + i);
  }

  return sum;
}

int main()
{
  int arr[5] = {10, 20, 30, 40, 50};
  int* ptr = arr;  

  int result = sumArray(ptr, 5);

  cout << result;

}