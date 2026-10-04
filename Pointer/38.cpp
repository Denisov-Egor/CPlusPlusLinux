#include <iostream>

using namespace std;

void resetPointer(int** ptr)
{
  if (ptr != nullptr)
  {
    *ptr = nullptr;
  }
  
}

int main()
{
int number = 50;
int* ptr = &number;

cout << "До: " << ptr << endl;

resetPointer(&ptr);

cout << "После: " << ptr << endl;

resetPointer(nullptr);
}