#include <iostream>

using namespace std;

int countPositive(int* ptr, int size)
{
  int count = 0;

  for (int i = 0; i < size; i++)
  {
    if (*(ptr + i) > 0)
    {
      count++;
    }
  }
  
  return count;
}

int countNegative(int* ptr, int size)
{
  int count = 0;

  for (int i = 0; i < size; i++)
  {
    if (*(ptr + i) < 0)
    {
      count++;
    }
  }
  
  return count;
}

int main()
{
  int arr[7] = {-5, 10, -3, 7, 0, 4, -1};
  int* ptr = arr;

  int resultPos = countPositive(ptr, 7);
  cout << resultPos << endl;
  
  int resultNeg = countNegative(ptr, 7);
  cout << resultNeg;

}