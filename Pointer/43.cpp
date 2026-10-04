#include <iostream>

using namespace std;

void processPointer(int** ptr)
{
  if (ptr == nullptr)
  {
    cout << "Первый указатель пуст";
  }else if (*ptr == nullptr) 
  {
    cout << "Второй указатель пуст"; 
  }else
  {
    cout << **ptr;
  }  
}

int main()
{
  int number = 50;
  int* ptr = &number;

  int* empty = nullptr;

  processPointer(&ptr);
  processPointer(&empty);
  processPointer(nullptr);
}