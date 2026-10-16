#include <iostream>

using namespace std;

int main()
{
  int SIZE;

  int even = 0;
  int odd = 0;

  cin >> SIZE;

  int arr[SIZE];

  for (int i = 0; i < SIZE; i++)
  {
    cin >> arr[i];

    if (arr[i] % 2 == 0)
    {
      even++;
    }else
    {
      odd++;
    }
  }
  cout << even << endl << odd;
}