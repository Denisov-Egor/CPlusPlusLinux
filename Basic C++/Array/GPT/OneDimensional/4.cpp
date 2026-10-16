#include <iostream>

using namespace std;

int main()
{
  int SIZE;
  
  cin >> SIZE;
  
  int Arr[SIZE];  

  int max;
  int maxIndex = 0;

  for (int i = 0; i < SIZE; i++)
  {
    cin >> Arr[i];

    max = Arr[0];

    if (Arr[i] > max)
    {
      max = Arr[i];
      maxIndex = i;
    }
  }
  cout << endl;
  cout << max;
  cout << endl;
  cout << maxIndex;
}