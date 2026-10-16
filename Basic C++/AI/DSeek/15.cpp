#include <iostream>

using namespace std;

int sumArray(int arr[], int size)
{
  int sum = 0;

  for (int i = 0; i < size; i++)
  {
    sum += arr[i];
  }

  return sum;
}

int main()
{
  int n;

  cin >> n;

  int* MyArr = new int[n];

  for (int i = 0; i < n; ++i)
    cin >> MyArr[i];
  
    for (int i = 0; i < n; i++)
      cout << MyArr[i];

  cout << endl;
    
  int result = sumArray(MyArr, n);
  cout << "Сумма элементов массива: " << result << endl;

  delete[] MyArr;
}