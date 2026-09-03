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

  int max = numbers[0];

  for (int i = 1; i < n; i++)
  {
    if (numbers[i] > max)
      {
        max = numbers[i];
      }
  } 

  return min;
}

int calculateSum(int n, int sum)
{

}
double calculateAverage(int n, int average)
{

}

int main()
{
  int N;
  int n;
  int numbers[n];
  int res;

  cin >> N;
 
  res = findMin(n);
  res = findMax(n);
}