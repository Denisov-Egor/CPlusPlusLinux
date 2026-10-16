#include <iostream>

using namespace std;

int main()
{
  int n, f = 0;

  cin >> n;

  for (int i = 2; i <= n / 2; ++i)
  {
    if (n % i == 0)
    {
      f++;2
      break;
    }
  }
  
  if(f == 0)
        cout<<n<<" - это простое число."<<endl;
    else
        cout<<n<<" не является простым числом."<<endl;
}