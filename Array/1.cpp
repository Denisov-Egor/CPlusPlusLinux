#include <iostream>

using namespace std;

int main()
{
  int SIZE;

  cin >> SIZE;

  int Arr[SIZE];
  
  for (int i = 0; i < SIZE; i++)
  {
    cin >> Arr[i] << endl;

    cout << Arr[i];
  }
}