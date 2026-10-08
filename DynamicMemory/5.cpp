#include <iostream>

using namespace std;

int main()
{
  int n;
  int sum = 0;

  cin >> n;

  int* arr = new int[n];

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  for (int i = 0; i < n; i++)
  {
    cout << *(arr + i);
    
    sum += *(arr + i);
  }

  cout << sum;

  delete [] arr;
  arr = nullptr;
}