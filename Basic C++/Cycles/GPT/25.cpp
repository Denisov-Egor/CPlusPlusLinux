#include <iostream>

using namespace std;

int main()
{
  int N;
  int number;
  int sum = 0;
  int count = 0;

  cin >> N;

  for (int i = 0; i < N; i++)
  {
    cin >> number;

    if (number == 100)
    {
      break;
    }

    if (number == 0)
    {
      continue;
    }

    if (number > 0)
    {
      sum += number;
    }
    
    if (number < 0)
    {
      count++;
    }    
  }
  
  cout << sum;
  cout << count;
}