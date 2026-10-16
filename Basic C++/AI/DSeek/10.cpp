#include <iostream>

using namespace std;

int main()
{
  int n, max, min;

  cin >> n;

  int arr[n];

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }  

  for (int i = 0; i < n; i++)
  {
   if (arr[i] > max)
   {
    max = arr[i];
   }
    if (arr[i] < min)
   {
    min = arr[i];
   }
  }
  
  cout << max << endl;
  cout << min << endl;
}