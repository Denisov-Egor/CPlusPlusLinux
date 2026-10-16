#include <iostream>

using namespace std;

int sumArray(int size, int* arr)
{
  int sum = 0;

  for (int i = 0; i < size; i++)
  {
    sum += *(arr + i);
  }
  
  return sum;
}

double averageArray(int size, int* arr)
{
  int sum = sumArray(size, arr);

  return double(sum) / size;
}

int minArray(int size, int* arr)
{
  int min = arr[0];

  for (int i = 0; i < size; i++)
  {
    if (arr[i] < min)
    {
      min = arr[i];
    }
  }

  return min;
}

int maxArray(int size, int* arr)
{
  int max = arr[0];

  for (int i = 0; i < size; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
  }

  return max;
}

int main()
{
  int size;

  cin >> size;

  int* arr = new int[size];

  for (int i = 0; i < size; i++)
  {
    cin >> *(arr + i);
  }

  cout << sumArray(size, arr) << endl;
  cout << averageArray(size, arr) << endl;
  cout << minArray(size, arr) << endl;
  cout << maxArray(size, arr) << endl;

  delete [] arr;
  arr = nullptr;
  
}