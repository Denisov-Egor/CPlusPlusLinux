#include <iostream>

using namespace std;

void arrayOutput(int size, int* arr, int* copyArr)
{
   for (int i = 0; i < size; i++)
  {
    cout << arr[i] << ' ';
  }

  cout << endl;
  
  for (int i = 0; i < size; i++)
  {
    cout << copyArr[i] << ' ';
  }
}

int main()
{
  int size;
  int newNumber;

  cin >> size;

  int* arr = new int[size];

  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }

  int* copyArr = new int[size];

  for (int i = 0; i < size; i++)
  {
    copyArr[i] = arr[i];
  }
  
  arrayOutput(size, arr, copyArr);
  
  cin >> newNumber;
  
  copyArr[0] = newNumber;

  arrayOutput(size, arr, copyArr);
  
  delete [] arr;
  arr = nullptr;

  delete [] copyArr;
  copyArr = nullptr;
}