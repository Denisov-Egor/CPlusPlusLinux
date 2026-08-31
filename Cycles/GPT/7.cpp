#include <iostream>

using namespace std;

int main()
{
  int n;
  int reversed = 0;
  int digit;

  cin >> n;

  while (n != 0)
  {
    digit = n % 10;
    reversed = reversed * 10 + digit;
    n = n / 10;
  }
  cout << reversed;
}