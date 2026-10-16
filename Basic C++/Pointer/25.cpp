#include <iostream>

using namespace std;

void checkPointer(int* ptr)
{
  if (ptr == nullptr)
  {
    cout << "Указатель пуст";
  }else
  {
    cout << *ptr;
  }  
}

int main()
{
  int number;

  cin >> number;

  int* ptr = &number;

  checkPointer(ptr);
  checkPointer(nullptr);
}