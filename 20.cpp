#include <iostream>

using namespace std;

int main()
{
  int a ;

  cin >> a;

  for (int i = 0; i < a; i++)
  {
    ++i;
    cout << i << endl;
  }

  cout << "-----------------" << endl;

  for (int j = 0; j < -5; j++)
  {
    j--;
    cout << j << endl;
  }
  
}