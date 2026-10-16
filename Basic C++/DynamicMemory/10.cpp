#include <iostream>

using namespace std;

int main()
{
  int size;
  int newSize;

  cin >> size;

  int* arr = new int[size];

  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }

  cin >> newSize;

  int* newArr = new int[newSize];

  for (int i = 0; i < size && i < newSize; i++)
  {
    newArr[i] = arr[i];
  }
  
  for (int i = size; i < newSize; i++)
  {
    newArr[i] = 0;    
  }
  
  for (int i = 0; i < newSize; i++)
  {
    cout << newArr[i] << ' ';
  }

  delete [] arr;
  arr = nullptr;

  delete [] newArr;
  newArr = nullptr;
}