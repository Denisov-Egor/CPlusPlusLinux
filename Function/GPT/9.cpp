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
  double a, b;
  char c;
  double res;

  cin >> a >> c >> b;

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
    res = divide(a, b);
  } else
  {
    cout << "Error!!!";
  }
  
  
  cout << res;
}