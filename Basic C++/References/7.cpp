#include <iostream>

using namespace std;

void analyzeArray(int (&arr)[10], int& positive, int&negative, int& even, int& odd)
{
  for (int i = 0; i < 10; i++)
  {
    if (arr[i] > 0)
    {
      positive++;
    }else if (arr[i] < 0)
    {
      negative++;
    }
    
    if (arr[i] % 2 == 0)
    {
      even++;
    }else
    {
      odd++;
    }    
  }  

}

int main()
{
  int positive = 0, negative = 0;
  int even = 0, odd = 0;
  
  int numbers[10] = {1, 2, 3, 4, 5, -6, -7, -8, -9, -10};
  
  analyzeArray(numbers, positive, negative, even, odd);
  
  cout << positive << ' ' << negative << '\n';
  
  cout << even << ' ' << odd << '\n';
  
}