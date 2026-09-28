#include <iostream>

using namespace std;

void sumArray(int (&arr)[5], int& result) 
{
  for (int i = 0; i < 5; i++)
  {
    result += arr[i];
  }
  
}

int main()
{
  int numbers[5] = {1,2,3,4,5};
  int sum = 0;
  
  sumArray(numbers, sum);

  cout << sum;
}