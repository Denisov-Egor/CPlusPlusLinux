#include <iostream>

using namespace std;

void reset(int* ptr)
{
  *ptr = 0;
}

int main()
{
  int number = 50;

  int* ptr = &number;

  reset(ptr);

  cout << number;

}