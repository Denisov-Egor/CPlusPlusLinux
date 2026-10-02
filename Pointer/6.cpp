#include <iostream>

using namespace std;

void increase(int* ptr)
{
  *ptr += 10; 
}

int main()
{
  int* ptr;
  int number = 50;

  ptr = &number;

  increase(ptr);

  cout << number;
}