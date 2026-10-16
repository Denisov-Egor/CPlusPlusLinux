#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  const int MIN = 1;
  const int MAX = 100;

  int SecretNumber, SerchNumber;

  srand(time(0));
  SecretNumber = rand() % (MAX - MIN + 1) + MIN;

  cout << SecretNumber << endl;

  for (int i = 0; i <= 7; i++)
  {

    cin >> SerchNumber;

    if (SerchNumber < SecretNumber)
    {
      cout << '<' << endl;
    }else if (SerchNumber > SecretNumber)
    {
      cout << '>' << endl;
    }else
    {
      cout << "dsd" << endl;
      break;
    }
  }
  
}