#include <iostream>

using namespace std;

int main()
{
  int a;

  cin >> a;

  if (a >= 90 && a <= 100)
  {
    cout << "A";
  }
  else if (a >= 75 && a <= 89)
  {
    cout << "B";
  }
  else if (a >= 60 && a <= 74)
  {
    cout << "C";
  }
  else
  {
    cout << "D";
  }
  
  
}