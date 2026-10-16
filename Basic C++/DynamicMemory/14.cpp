#include <iostream>

using namespace std;

int main()
{
  int size;
  int index;

  cin >> size;

  int* arr = new int[size];

  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }

  cin >> index;

  int* newArr = new int[size - 1];

  for (int i = 0; i < index; i++)
  {
    newArr[i] = arr[i];
  }

  for (int i = index + 1; i < size; i++)
  {
    newArr[i - 1] = arr[i ];
  }
  
  for (int i = 0; i < size - 1; i++)
  {
    cout << newArr[i] << ' ';
  }

  delete [] arr;
  arr = nullptr;

  delete [] newArr;
  newArr = nullptr;
  
}