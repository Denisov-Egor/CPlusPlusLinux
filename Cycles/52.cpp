#include <iostream>

using namespace std;

int main()
{
  int a, b, sum = 0;

  cin >> a >> b;

  do
  {
    if (a % 2 != 0)
    {
      cout << a << endl;
      sum += a;
    }

    a++;
    
  } while (a < b);

  cout << "-------" << endl << sum << endl;
}