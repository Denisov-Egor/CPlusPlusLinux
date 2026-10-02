#include <iostream>

using namespace std;

void swapValues(int* a, int* b)
{
  int temp = *a;
  *a = *b;
  *b = temp;

  cout << *a << ' ' << *b;
}

int main()
{
  int a = 10;
  int b = 20;

  swapValues(&a, &b);
}