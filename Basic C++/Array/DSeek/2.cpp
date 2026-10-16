#include <iostream>
#include <ctime>

using namespace std;

int main()
{
  srand(time(NULL));

  bool already;
  int newrandom;

  const int SIZE = 10;
  int Arr[SIZE];

  //cin >> SIZE;

  for (int i = 0; i < SIZE;)
  {
    already = false;
    newrandom = rand() % 20;

    for (int j = 0; j < i; j++)
    {
      if (Arr[j] == newrandom)
      {
        already = true;
        break;
      }
    }
    
    if (!already)
    {
      Arr[i] = newrandom;
      i++;
    }
  }

  for (int i = 0; i < SIZE; i++)
  {
    cout << Arr[i] << endl;
  }
  
}