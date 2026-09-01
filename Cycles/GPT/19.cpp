#include <iostream>

using namespace std;

int main()
{
  int n;
  int sum = 0;

  cin >> n;

  for (int i = 0; i <= n; i++)
  {
    sum += i;
  }
  
  cout << sum;

  cout <<  "------------" << endl;

  int N;
  int Sum = 0;
  int j = 0;

  cin >> N;

  while (j <= n)
  {
    Sum += j;
    j++;
  }
  
  cout << Sum;
}