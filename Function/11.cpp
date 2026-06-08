#include <iostream>
#include <cmath>

using namespace std;

double radToDeg(double rad)
{
  return rad * (180 / M_PI);
}

double degToRad(double deg) 
{
  return deg * (M_PI / 180.0);
}

int main()
{
  double rad, deg;
  double rad2, deg2;

  cin >> rad;
  deg = radToDeg(rad);
  cout << deg;

  cout << endl;
  
  cin >> deg2;
  rad2 = degToRad(deg2);
  cout << rad2;
}