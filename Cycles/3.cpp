#include <iostream>

using namespace std;

int main()
{
  int n, fact = 1;

  cin >> n;
  //cin >> fact;

  for (int i = 1; i <= n; ++i)
  {
    fact *= i;
  }
  cout << fact << endl;
  

}