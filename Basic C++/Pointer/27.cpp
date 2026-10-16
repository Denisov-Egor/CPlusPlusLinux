#include <iostream>

using namespace std;

void setValue(int* ptr, int value)
{
  if (ptr != nullptr)
  {
    *ptr = value;
  } 
}

int main()
{
  int number = 50;
  int* ptr = &number;

  setValue(ptr, 100);
  cout << number << endl;

  setValue(nullptr, 200);
  cout << number << endl;
}