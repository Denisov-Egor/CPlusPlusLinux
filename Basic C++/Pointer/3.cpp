#include <iostream>

using namespace std;

int main()
{
  int a = 10;
  int b = 20;

  int* ptr = &a;

  cout << *ptr << endl;

  ptr = &b;

  cout << *ptr;
}