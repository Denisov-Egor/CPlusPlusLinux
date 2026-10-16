#include <iostream>

using namespace std;

int main()
{
  int size1;
  int size2;

  cin >> size1 >> size2;

  int* arr1 = new int[size1];

  for (int i = 0; i < size1; i++)
  {
    cin >> arr1[i];
  }
  
  int* arr2 = new int[size2];

  for (int i = 0; i < size2; i++)
  {
    cin >> arr2[i];
  }

  int* merged = new int[size1 + size2];

  for (int i = 0; i < size1; i++)
  {
    merged[i] = arr1[i];
  }

  for (int i = 0; i < size2; i++)
  {
    merged[size1 + i] = arr2[i];
  }

  for (int i = 0; i < size1 + size2; i++)
  {
    cout << merged[i];
  }
  
  delete [] arr1;
  arr1 = nullptr;

  delete [] arr2;
  arr2 = nullptr;

  delete[] merged;
  merged = nullptr;
}