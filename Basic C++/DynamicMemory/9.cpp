#include <iostream>

using namespace std;

void fillsInArray(int size, int* arr)
{
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
}

int main()
{
  int size;

  int splitIndex;
  int firstSize;
  int secondSize;

  int* first = nullptr;
  int* second = nullptr;

  cin >> size;

  int* arr = new int[size];

  fillsInArray(size, arr);

  cin >> splitIndex;

  if (splitIndex >= 0 && splitIndex <= size)
  {
    firstSize = splitIndex;
    secondSize = size - splitIndex;

    first = new int[firstSize];
    second = new int[secondSize];

    for (int i = 0; i < firstSize; i++)
    {
      *(first + i) = *(arr + i);
    }

    for (int i = 0; i < secondSize; i++)
    {
      *(second + i) = *(arr + i + splitIndex);
    }

  }else
  {
    cout << "Не верно указан индекс";
    
    delete [] arr;
    arr = nullptr;
    return 0;
  }
  
  cout << "Первая часть: ";

  for (int i = 0; i < firstSize; i++)
  {
    cout << *(first + i) << ' ';
  }

  cout << endl << "Вторая часть: ";

  for (int i = 0; i < secondSize; i++)
  {
    cout << *(second + i) << ' ';
  }

  delete [] arr;
  arr = nullptr;
  
  delete [] first;
  first = nullptr;

  delete [] second;
  second = nullptr;
  
}