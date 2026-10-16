#include <iostream>

using namespace std;

void reverseArray(int arr[], int size)
{
  int temp;

  for (int i = 0; i < size / 2; i++)
  {
    temp = arr[i];
    arr[i] = arr[size - 1 - i];
    arr[size - 1 - i] = temp;
  }
}

int main()
{
  int size;

  cin >> size;

  int arr[size];

  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
}