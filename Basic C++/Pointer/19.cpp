#include <iostream>

using namespace std;

void changeElement(int* ptr, int index, int value)
{
  *(ptr + index) = value;
  
}

int main()
{
  int arr[5] = {10, 20, 30, 40, 50};
  int* ptr = arr;
  
  int index;
  int value;
  
  cin >> index >> value;
  
  changeElement(ptr, index, value);
  
  for (int i = 0; i < 5; i++)
  {
    cout << *(ptr + i) << ' ';
  }
}