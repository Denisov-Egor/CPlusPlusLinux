#include <iostream>

using namespace std;

void inputArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
}

int findMin(int arr[], int size)
{
  int min = arr[0];

  for (int i = 1; i < size; i++)
  {
    if (arr[i] < min)
    {
      min = arr[i];
    }
  }

  return min;
}

int findMax(int arr[], int size)
{
  int max = arr[0];

  for (int i = 1; i < size; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
  }

  return max;
}

int findSum(int arr[], int size)
{
  int sum = 0;

  for (int i = 0; i < size; i++)
  {
    sum += arr[i];
  }
  return sum;
}

double findAverage(int arr[], int size)
{
  return (double)findSum(arr, size) / size;
}

int countEven(int arr[], int size)
{
  int count = 0;
  
  for (int i = 0; i < size; i++)
  {
    if (arr[i] % 2 == 0)
    {
      count++;
    }
  }
  return count;
}

int countPositive(int arr[], int size)
{
  int count = 0;

  for (int i = 0; i < size; i++)
  {
    if (arr[i] > 0)
    {
      count++;
    }
  }
  return count;
}

int countNegative(int arr[], int size)
{
  int count = 0;

  for (int i = 0; i < size; i++)
  {
    if (arr[i] < 0)
    {
      count++;
    }
  }
  return count;
}

int findMaxIndex(int arr[], int size)
{
  int maxIndex = 0;
  
  for (int i = 0; i < size; i++)
  {
    if (arr[i] > arr[maxIndex])
    {
      maxIndex = i;
    }
  }
  return maxIndex;
}

void printReverse(int arr[], int size)
{
  for (int i = size - 1; i >= 0; i--)
  {
  cout << arr[i] << " ";
  }
}

int countOdd(int arr[], int size)
{
  int count = 0;

  for (int i = 0; i < size; i++)
  {
    if (arr[i] % 2 != 0)
    {
      count++;
    }
  }

  return count;
}

int main()
{
  int size;
  int max, min;
  int sum;
  double average;
  int even;
  int odd;
  int positive;
  int negative;
  int maxIndex;

  cin >> size;

  int arr[size];

  inputArray(arr, size);

  min = findMin(arr, size);
  max = findMax(arr, size);
  sum = findSum(arr, size);
  average = findAverage(arr, size);
  even = countEven(arr, size);
  odd = countOdd(arr, size);
  positive = countPositive(arr, size);
  negative = countNegative(arr, size);
  maxIndex = findMaxIndex(arr, size);

  cout << "Minimum: " << min << endl; 
  cout << "Maximum: " << max << endl; 
  cout << "Sum: " << sum << endl; 
  cout << "Average: " << average << endl; 
  cout << "Even: " << even << endl; 
  cout << "Odd: " << odd << endl; 
  cout << "Positive: " << positive << endl; 
  cout << "Negative: " << negative << endl; 
  cout << "Max index: " << maxIndex << endl;

  cout << "Reverse: "; 
  printReverse(arr, size);
  cout << endl;
}