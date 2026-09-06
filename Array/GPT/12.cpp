#include <iostream>

using namespace std;

void replaceNegatives(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    if (arr[i] < 0)
    {
      arr[i] = 0;
    } 
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
  replaceNegatives(arr, size);

  for (int i = 0; i < size; i++)
  {
    cout << arr[i];
  }
  
}