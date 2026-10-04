#include <iostream>

using namespace std;

void changeValue(int** ptr)
{
  if (ptr != nullptr && *ptr != nullptr) **ptr = 100;
}

int main()
{
  int number = 50;
  int* ptr = &number;

  cout << "До изменения: " << number << endl;

  changeValue(&ptr);

  cout << "После изменения: " << number << endl;

  changeValue(nullptr);

  int* empty = nullptr;
  changeValue(&empty);

  if (empty == nullptr) cout << "empty: nullptr" << endl;
}