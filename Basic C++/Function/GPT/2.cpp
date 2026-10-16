#include <iostream>

using namespace std;

int square(int n)
{
  return n * n;
}

int main()
{
  int n;
  int res;

  cin >> n;

  res = square(n);

  cout << res;
}