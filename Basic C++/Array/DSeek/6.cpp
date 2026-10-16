#include <iostream>
#include <ctime>

using namespace std;

int main()
{
  int sum = 0;

  int SIZE = 10;
  int Arr[SIZE];

  srand(time(NULL));

  for (int i = 0; i < SIZE; i++)
  {
    Arr[i] = rand() % 20;

    cout << Arr[i] << endl;

    sum += Arr[i];
  }
  
  cout << "sum =" << sum;
}