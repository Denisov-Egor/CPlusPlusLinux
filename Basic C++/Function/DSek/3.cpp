#include <iostream>
#include <cmath>

using namespace std;

int geometricMean(double a, double b)
{
  return sqrt(a * b);
}

int main()
{
  int res = geometricMean(4, 9);

  cout << res;
}