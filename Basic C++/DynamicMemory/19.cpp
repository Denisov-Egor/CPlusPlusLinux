#include <iostream>

using namespace std;

int main()
{
  bool found = false;
  int size;
  
  cin >> size;

  if (size <= 0)
  {
    return 0;
  }
  
  int* arr = new int[size];
  
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  
  int max = arr[0];
  int max2 = arr[0];
  
  for (int i = 0; i < size; i++)
  {
    if (arr[i] > max)
    {
      max2 = max;
      max = arr[i];
      found = true;
    }
    
    if (arr[i] < max && arr[i] > max2)
    {
      max2 = arr[i];
      found = true;
    }
    
  }
  
  if (found)
  {
    cout << max2;
  }else
  {
    cout << "Второго максима нет";
  }

  delete [] arr;
  arr = nullptr;
}