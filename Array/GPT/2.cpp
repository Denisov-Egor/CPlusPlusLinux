#include <iostream>

using namespace std;

int main()
{
  int SIZE;
  
  cin >> SIZE;
  
  int Arr[SIZE];  

  int max;
  int min;

  for (int i = 0; i < SIZE; i++)
  {
    cin >> Arr[i];

    max = Arr[0];
    min = Arr[0];

    if (Arr[i] > max)
    {
      max = Arr[i];
    }
    if (Arr[i] < min)
    {
      min = Arr[i];
    }

  }
  cout << endl;
  cout << max << ' ' << min;
}