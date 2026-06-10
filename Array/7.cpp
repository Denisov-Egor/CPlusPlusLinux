#include <iostream>
#include <ctime>

using namespace std;

int main()
{
  //const int SIZE = 10;
  int Arr[5] = {1, 2, 0, 0, 0};

  int res = 0;

  srand(time(NULL));

  for (int i = 0; i < 5; i++)
  {
    //Arr[i] = rand() % 10;

    cout << Arr[i] << endl;

  }

  for (int i = 0; i < 5; i++)
  {
    if (Arr[i] > 0)
    {
      res += Arr[i];
    }else
    {
      cout << '0';
    }
  }
  
  cout << res;
}