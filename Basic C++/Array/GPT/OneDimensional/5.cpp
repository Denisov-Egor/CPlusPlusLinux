#include <iostream>

using namespace std;

int main()
{
  int SIZE;
  cin >> SIZE;

  int start;
  int end;
  int sum = 0;

  int arr[SIZE];
  
  for (int i = 0; i < SIZE; i++)
  {
    cin >> arr[i];    
  }
  
  cin >> start >> end;

  for (int i = start; i <= end; i++)
  {
    sum += arr[i];
  }

  cout << sum;
}