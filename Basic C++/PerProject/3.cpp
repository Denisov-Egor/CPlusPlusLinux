#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main()
{
  int RandomPassword;
  int n;
  int RandomSymbols

  int symbols[27]  = "abcdefghijklmnopqrstuvwxyz";

  srand(time(NULL));

  cout << "Ввелите длину пароля: ";
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    RandomPassword = rand() % 20;
    RandomSymbols = rand() % 27;

    cout << RandomPassword << RandomSymbols;
  }
  
}