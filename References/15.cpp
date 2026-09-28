#include <iostream>

using namespace std;

void add(int a, int b, int& result)
{
  result = a + b;

  cout << a << '+' << b << '=' << result << '\n';
}

void subtract(int a, int b, int& result)
{
  result = a - b;

  cout << a << '-' << b << '=' << result << '\n';
}

void multiply(int a, int b, int& result)
{
  result = a * b;

  cout << a << '*' << b << '=' << result << '\n';
}

void division(int a, int b, double& result)
{
  if(b != 0)
  {
    result = double(a) / double(b);
  }
  else
  {
    cout << "Error: division by zero";
  }

  cout << a << '/' << b << '=' << double(result) << '\n';
}

int main()
{
  int a, b;
  int result = 0;
  double divisionResult = 0;

  cout << "Enter two numbers: ";

  cin >> a >> b;

  add(a, b, result);
  subtract(a, b, result);
  multiply(a, b, result);
  division(a, b, divisionResult);
}