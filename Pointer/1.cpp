#include <iostream>

using namespace std;

int main()
{
  int number = 50;

  int* ptr = &number;

  cout << number << endl;
  cout << ptr << endl;
  cout << *ptr;
}