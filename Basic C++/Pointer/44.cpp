#include <iostream>

using namespace std;

int main()
{
  int number = 50;

  int* ptr = &number;
  int** prr2 = &ptr;

  cout << ptr;
  cout << *ptr;
}