#include <iostream>

using namespace std;

void printValue(int* ptr)
{
  if (ptr != nullptr)
  {
    cout << *ptr;
  }else
  {
    cout << "Указатель пуст";
  }  
}

int main()
{
  int number;

  cin >> number;

  int* ptr = &number;

  printValue(ptr);
  printValue(nullptr);
}