#include <iostream>
#include <cmath>

using namespace std;


double distance(double x1, double y1, double x2, double y2) 
{
  return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

int main()
{
  double x1, y1, x2, y2;

  cin >> x1 >> y1;
  cin >> x2 >> y2;

  double dist = distance(x1, y1, x2, y2);

  cout << dist;
}
