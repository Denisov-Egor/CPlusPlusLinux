#include <iostream>

using namespace std;

int main()
{
  int size;
  int index, value;

  cin >> size;

  int* arr = new int[size];
  
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  
  cin >> index;
  
  if (index >= 0 && index <= size)
  {
    cin >> value;
  }else
  {
    return 0;
  }
  
  int* newArr = new int[size + 1];

  for (int i = 0; i < index; i++)
  {
    newArr[i] = arr[i];
  }
  
  newArr[index] = value;

  for (int i = index; i < size; i++)
  {
    newArr[i + 1] = arr[i];
  }
  
  for (int i = 0; i < size + 1; i++)
  {
    cout << newArr[i];
  }
  
  delete [] arr;
  arr = nullptr;
  
  delete [] newArr;
  newArr = nullptr;
  
}