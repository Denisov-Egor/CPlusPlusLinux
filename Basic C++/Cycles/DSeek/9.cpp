#include <iostream>

using namespace std;

int main()
{
  const int a = 5;
  int n;

  cin >> n;

  while (n != a)
  {
    if (n < a)
    {
      cout << 'd' << endl;
    }else
    {
      cout << 's' << endl;
    }
    cin >> n;
    
  }
  
  cout << "ds " << a;
}