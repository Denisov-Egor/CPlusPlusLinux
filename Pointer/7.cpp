#include <iostream>

using namespace std;

void decrease(int* ptr)
{
  *ptr -= 10;
}

int main()
{
  int* ptr;
  int number = 50;

  ptr = &number;

  decrease(ptr);

  cout << number;
}