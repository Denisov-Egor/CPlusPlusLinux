#include <iostream>

using namespace std;

void increaseArray(int* ptr, int size, int value)
{
  for (int i = 0; i < size; i++)
  {
    *(ptr + i) += value;
  }

}

void multiplyArray(int* ptr, int size, int multiplier)
{
  for (int i = 0; i < size; i++)
  {
    *(ptr + i) *= multiplier;
  }
  
}

int main()
{
  int arr[5] = {10, 20, 30, 40, 50};
  int* ptr = arr;

  increaseArray(ptr, 5, 5);

  for (int i = 0; i < 5; i++)
  {
    cout << *(ptr + i) << ' ';
  }

  cout << endl;
  
  multiplyArray(ptr, 5, 5);

  for (int i = 0; i < 5; i++)
  {
    cout << *(ptr + i) << ' ';
  }
  
}