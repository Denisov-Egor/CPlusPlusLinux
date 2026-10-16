#include <iostream>

using namespace std;

void changeValue(int** ptr)
{
  **ptr = 100;
}

int main()
{
  int number = 50;
  int* ptr = &number;

  changeValue(&ptr);

  cout << number;
}