#include <iostream>

using namespace std;

int findMin(int numbers[], int n)
{
  int min = numbers[0];

  for (int i = 1; i < n; i++)
  {
    if (numbers[i] < min)
      {
        min = numbers[i];
      }
  } 

  return min;
}

int findMax(int numbers[], int n)
{
  int max = numbers[0];
  
  for (int i = 1; i < n; i++)
  {
    if (numbers[i] > max)
      {
        max = numbers[i];
      }
  } 
  
  return max;
}

int calculateSum(int numbers[], int n)
{
  int sum = 0;

  for (int i = 0; i < n; i++)
  {
    sum += numbers[i];
  }
  
  return sum;
}

double calculateAverage(int numbers[], int n)
{
  int sum = calculateSum(numbers, n);

  double average = 0;

  average = static_cast<double>(sum) / n;
  
  return average;
}

int main()
{
  int N;
  int numbers[100];
  int res;
  double res1;

  cin >> N;

  for (int i = 0; i < N; i++)
  {
    cin >> numbers[i];
  }
  
  cout << "----------------------" << endl;
 
  res = findMin(numbers, N);
  cout << res << endl;
  res = findMax(numbers, N);
  cout << res << endl;
  res = calculateSum(numbers, N);
  cout << res << endl;
  res1 = calculateAverage(numbers,  N);
  cout << res1 << endl;
}