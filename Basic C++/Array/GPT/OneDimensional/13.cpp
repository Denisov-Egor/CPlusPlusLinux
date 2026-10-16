#include <iostream>

using namespace std;

int findSecondMax(int arr[], int size)
{
  int secondMax;
  int max = arr[0];
  
  for (int i = 1; i < size; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
  }
  
  for (int i = 0; i < size; i++)
  {
    if (arr[i] < max)
    {
      secondMax = arr[i];
      break;
    }
  }
  
  for (int i = 0; i < size; i++)
  {
    if (arr[i] < max && arr[i] > secondMax)
    {
      secondMax = arr[i] ;
    }
  }
  return secondMax;
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

  int secondMax = findSecondMax(arr,size);
  cout << secondMax;
}