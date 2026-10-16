#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  int roll1, roll2;
  int attempt = 0;
  
  srand(time(0));
  do
  {
    attempt++;
    roll1 = (rand() % 6) + 1;
    roll2 = (rand() % 6) + 1;

    cout << attempt << ' ' << roll1 << ' ' << roll2 << endl;
  } while (roll1 != roll2);
  cout << attempt << endl;
}