#include <iostream>

using namespace std;

int pointerDistance(int* first, int* second)
{
  return second - first;
  }

int main()
{
  int arr[6] = {10, 20, 30, 40, 50, 60};
  int* ptr = arr;

  cout << pointerDistance(&arr[0], &arr[5]);
}