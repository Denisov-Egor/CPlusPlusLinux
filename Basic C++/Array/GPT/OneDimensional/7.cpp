#include <iostream>

using namespace std;

int main()
{
  int SIZE;
  cin >> SIZE;

  int arr[SIZE];
  int newArr[SIZE];

  int newSize = 0;

  for (int i = 0; i < SIZE; i++)
  {
    cin >> arr[i];
  }

  for (int i = 0; i < SIZE; i++)
  {
    if (arr[i] >= 0)
    {
      newArr[newSize] = arr[i];
      newSize++;
    } 
  }  

  for (int i = 0; i < newSize; i++)
  {
    cout << newArr[i];
  }
}