#include <iostream>

using namespace std;

int resert(int& value)
{
  return value = 0;
}

int main()
{
  int value = 100;

  resert(value);

  cout << value;
}