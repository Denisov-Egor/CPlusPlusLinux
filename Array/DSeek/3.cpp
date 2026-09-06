#include <iostream>
#include <ctime>

using namespace std;

int main()
{
  const int SIZE = 10;
  int Arr[SIZE];

  int min;

  int newRandom;

  bool allReady;
  
  srand(time(NULL));
  
  for (int i = 0; i < SIZE;)
  {
    allReady = false;

    newRandom = rand() % 10;


    for (int j = 0; j < i; j++)
    {
      if (Arr[j] == newRandom )
      {
        allReady = true;
        break;
      }    
    }

    if (!allReady)
    {
      Arr[i] = newRandom;
      i++;
    }
  }

  for (int i = 0; i < SIZE; i++)
  {
    cout << Arr[i] << endl;
  }
  
  min = Arr[0];
  for (int i = 0; i < SIZE; i++)
  {
    if (Arr[i] < min)
    {
      min = Arr[i];
    }
  }
  
  cout << 'a' << min;
}