#include <iostream>

using namespace std;

void fillsInArray(int size, int* arr)
{
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
}

int findElement(int size, int* arr, int target)
{
  for (int i = 0; i < size; i++)
  {
    if (target == *(arr + i))
    {
      return i;
    }
  }
  
  return -1;
}

int main()
{
  int target;
  int size;
  int find;
  
  cin >> size;
  
  int* arr = new int[size];

  fillsInArray(size, arr);
  
  cout << "Введите искомый элемент: ";
  cin >> target;

  find = findElement(size, arr, target);

  if (find == -1)
  {
    cout << "Эл не найден";
  }else
  {
    cout << find;
  }  
  
  delete[] arr;
  arr = nullptr;  
}