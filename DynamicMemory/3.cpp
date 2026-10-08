#include <iostream>

using namespace std;

void swapNumbers(int* a, int* b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main()
{
  int* a = new int(10);
  int* b = new int(20);

  cout << *a << *b;

  swapNumbers(a, b);

  cout << endl << *a << *b;

  delete a;
  a = nullptr;

  delete b;
  b = nullptr;
}