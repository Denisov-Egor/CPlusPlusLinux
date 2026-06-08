#include <iostream>

using namespace std;

int add(int a, int b)
{
  return a + b;
}

int main()
{
  int n1, n2;

  cin >> n1 >> n2;

  int res = add(n1, n2);

  cout << res;
}