#include <iostream>

using namespace std;

int main()
{
  int n; 
  int fact = 1;
  int i = 1;

  cin >> n;

  while (i <= n)
  {
    fact *= i;
    i++;
  }
  cout << fact;
}