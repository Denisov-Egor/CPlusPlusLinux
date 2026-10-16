#include <iostream>

using namespace std;

int sum(int a, int b)
{
  return a + b;
}

int main()
{
  int a, b;
  int res;

  cin >> a >> b;

  res = sum(a, b);

  cout << res;

}