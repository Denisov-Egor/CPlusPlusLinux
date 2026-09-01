#include <iostream>

using namespace std;

int max2(int a, int b)
{
  return (a > b);
}

int main()
{
  int a, b;

  cin >> a >> b;

  cout << (max2(a, b) ? '>' : '<');
}