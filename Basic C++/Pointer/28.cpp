#include <iostream>

using namespace std;

void increase(int* ptr, int value)
{
  if (ptr != nullptr)
  {
    *ptr += value;
  }
  
}

int main()
{
  int number = 50;
  int* ptr = &number;

  increase(ptr, 20);
  cout << number << endl;

  increase(ptr, 40);
  cout << number << endl;

  increase(nullptr, 20);
  cout << number << endl;
}