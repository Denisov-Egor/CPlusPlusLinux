#include <iostream>
#include <string>

using namespace std;

int main()
{
  string Password;
  string InsertPsssword;

  cin >> Password;

  for (int i = 0; i < 3; i++)
  {
    cin >> InsertPsssword;

    if (Password == InsertPsssword)
    {
      cout << '5';
      break;
    }
  }
}