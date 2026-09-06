#include <iostream>
#include <ctime>

using namespace std;

int main()
{
  int SIZE = 20;
  int arr[SIZE];

  srand(time(NULL));

  for (int i = 0; i < SIZE; i++)
  {
    arr[i] = rand() % 10;  

    cout << arr[i] << endl;
  }

  cout << "--------" << endl;

  for (int i = 0; i < SIZE; i++)
  {
     if (arr[i] % 2 == 0) 
     {
      cout << arr[i] << endl;
    }
  }  
}