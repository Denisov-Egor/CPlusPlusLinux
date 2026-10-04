#include <iostream>

using namespace std;

void redirectPointer(int** ptr, int* target)
{
  *ptr = target;
}

int main()
{
  int a = 10;
  int b = 20;

  int* ptr = &a;

  cout << *ptr;

  redirectPointer(&ptr, &b);
  
  cout << *ptr;
}