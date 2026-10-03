#include <iostream>

using namespace std;

void swapValues(int* a, int* b)
{
  if (a != nullptr && b != nullptr)
  {
    int temp = *a;
    *a = *b;
    *b = temp;
  }
  
}

int main()
{
  int a = 10;
  int b = 20;

  swapValues(&a, &b);

  cout << a << " " << b << endl;

  swapValues(&a, nullptr);
  cout << a << " " << b << endl;

}