#include <iostream>

using namespace std;

void findMinMax(int* arr, int size, int* min, int* max)
{
  for (int i = 0; i < size; i++)
  {
    if (arr[i] < *min)
    {
      *min = arr[i];
    }
    if ( arr[i] > *max)
    {
      *max = arr[i];
    }   
  }

}

int main()
{
  int arr[5] = {10, 4, 25, 7, 2};
  
  int min = arr[0];
  int max = arr[0];

  findMinMax(arr, 5, &min, &max);

  cout << min << ' ' << max;
}