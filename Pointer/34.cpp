#include <iostream>

using namespace std;

int main()
{
  int number = 50;
  int* ptr = &number;
  int** ptr2 = &ptr;

  cout << number << endl;
  cout << *ptr << endl;
  cout << **ptr2 << endl;
}