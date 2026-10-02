#include <iostream>

using namespace std;

int main()
{
  int number = 50;

  int* ptr = &number;

  *ptr = 100;

  cout << *ptr;
}