#include <iostream>

using namespace std;

void increase(int& number)
{
  number += 10;
}

int main()
{
  int value = 6;

  increase(value);

  cout << value; 
}