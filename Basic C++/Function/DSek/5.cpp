#include <iostream>
#include <cmath>

using namespace std;

int geometricMean(double a, double b)
{
  return sqrt(a * b);  
}

int main()
{
  double a, b;

  cin >> a >> b;

  double res = geometricMean (a, b);

  cout << res;
}