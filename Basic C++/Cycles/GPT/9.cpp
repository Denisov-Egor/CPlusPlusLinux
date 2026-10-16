#include <iostream>

using namespace std;

int main()
{
  int n;
  int j;
  int sum = 0;

  cin >> n;

  while (n != 0)
  {
    j = n % 10;
    sum += j;
    n = n / 10;
  }
  cout << sum;
}