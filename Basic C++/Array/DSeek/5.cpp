#include <iostream>
#include <ctime>

using namespace std;

int main()
{
  int SIZE = 10;
  int Arr[SIZE];

  srand(time(NULL));

  for (int i = 0; i < SIZE; i++)
  {
    Arr[i] = rand() % 20 - 10;

    cout << Arr[i] << endl;
  }

  cout << "--------" << endl;

  for (int i = 0; i < SIZE; i++)
  {
    if (Arr[i] > 0)
    {
      cout << Arr[i] << endl;
    } 
  }
  
  for (int i = 0; i < SIZE; i++)
  {
    if (Arr[i] < 0)
    {
      cout << Arr[i] << endl;
    }
  }
  
}