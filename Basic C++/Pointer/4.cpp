#include <iostream>

using namespace std;

int main()
{
  int a = 10;
  int b = 20;

  int temp = a;
  a = b;
  b = temp;

  int* ptr = &b;

  cout << *ptr;

  ptr = &a;

  cout << *ptr;
}