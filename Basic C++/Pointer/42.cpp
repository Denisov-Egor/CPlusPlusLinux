#include <iostream>

using namespace std;

void redirectPointer(int** ptr, int* target)
{
  if (ptr != nullptr && target != nullptr)
    *ptr = target;
}

int main()
{
  int a = 10;
  int b = 20;

  int* ptr = &a;

  
  redirectPointer(nullptr, &b);
  cout << *ptr;

  redirectPointer(&ptr, nullptr);
  cout << *ptr;
  
  redirectPointer(nullptr, nullptr);
  cout << *ptr;
  
  redirectPointer(&ptr, &b);
  cout << *ptr;
}