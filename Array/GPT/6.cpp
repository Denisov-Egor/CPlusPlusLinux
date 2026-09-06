#include <iostream>

using namespace std;

int main()
{
  int SIZE;
  cin >> SIZE;

  int temp;

  int arr[SIZE];

  for (int i = 0; i < SIZE; i++)
  {
    cin >> arr[i];
  }

  for (int i = 0; i < SIZE / 2; i++)
  {
    temp = arr[i];
    arr[i] = arr[SIZE - 1 - i];
    arr[SIZE - 1 - i] = temp;
  }

  for (int i = 0; i < SIZE; i++)
  {
    cout << arr[i];
  }
  
}