#include <iostream>

using namespace std;

void fillsInArray(int size, int* arr)
{
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
}

void outputsArray(int size, int* arr)
{
  cout << "Исходный массив: ";

  for (int i = 0; i < size; i++)
  {
    cout << arr[i];
  }
}

void reversArray(int size, int* arr)
{
  for (int i = 0; i < size / 2; i++)
  {
    int temp = arr[i];
    arr[i] = arr[size - 1 - i];
    arr[size - 1 - i] = temp;
  }

  cout << endl << "Обратный массив: ";

  for (int i = 0; i < size; i++)
  {
    cout << arr[i];
  }
  
}

int main()
{
  int size;
  
  cin >> size;
  
  int* arr = new int[size];

  fillsInArray(size, arr);
  outputsArray(size, arr);
  reversArray(size, arr);

  delete [] arr;
  arr = nullptr;
  
}