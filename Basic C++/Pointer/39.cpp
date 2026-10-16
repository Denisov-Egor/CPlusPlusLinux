#include <iostream>

using namespace std;

void changePointer(int** ptr, int* newAddress)
{
  if (ptr != nullptr && newAddress != nullptr)
    *ptr = newAddress;
}

int main()
{
  int a = 10;
  int b = 20;

  int* ptr = &a;

  cout << "До изменений:";

  changePointer(&ptr, &a);

  cout << *ptr;

  cout << "После изменений:";

  changePointer(&ptr, &b);

  cout << *ptr;

}