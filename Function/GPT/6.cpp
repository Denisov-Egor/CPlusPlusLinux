#include <iostream>

using namespace std;

int add(int a, int b)
{
  return a + b;
}

int subtract(int a, int b)
{
  return a - b;
}

int multiply(int a, int b)
{
  return a * b;
}

double divide(double a, double b)
{
  return a / b;
}

int main()
{
  double res;

  char c;

  int a, b;

  cin >> a;
  cin >> c;
  cin >> b;

  if (c == '+')
  {
    res = add(a, b);
  } 
  else if (c == '-')
  {
    res = subtract(a, b);
  }
  else if (c == '*')
  {
    res = multiply(a, b);
  }
  else if (c == '/')
  {
    if (b == 0)
    {
      cout << "Error";
      return 1;
    }
    
    res = divide(a, b);
  }
  else
  {
    cout << "Unknown operator";
    return 1;
  }
  
  cout << res;
}