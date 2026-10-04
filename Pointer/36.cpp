#include <iostream>

using namespace std;

void increaseValue(int** ptr, int value)
{
  **ptr += value;
}

int main()
{
  int number = 50;
  int* ptr = &number;

  increaseValue(&ptr, 20);
  cout << number << endl;

  increaseValue(&ptr, 30);
  cout << number << endl;
}