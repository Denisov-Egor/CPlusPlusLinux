#include <iostream>

using namespace std;

void changeArray(int (&arr)[5])
{
  for (int i = 0; i < 5; i++)
  {
    arr[i] += 10;
  }
  
}

int main()
{
  int numbers[5] = {1,2,3,4,5};

  changeArray(numbers);

  for (int i = 0; i < 5; i++)
  {
    cout << numbers[i] << ' ';
  }
  
}