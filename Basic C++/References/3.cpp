#include <iostream>

using namespace std;

void multiply(int& number, int multiplier)
{
  number *= multiplier;
}

int main()
{
  int value = 5;

  multiply(value, 3);

  cout << value;
}