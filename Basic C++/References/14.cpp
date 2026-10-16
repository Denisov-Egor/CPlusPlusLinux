#include <iostream>

using namespace std;

void average(const int (&arr)[5], double& result)
{
  double sum = 0;

  for (int i = 0; i < 5; i++)
  {
    sum += arr[i];
  }

  result = sum / 5;  
}

int main()
{
  double result = 0;

  int numbers[5] = {10, 20, 30, 40, 50};

  average(numbers, result);

  cout << result;
}