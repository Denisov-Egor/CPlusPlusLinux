#include <iostream>
#include <string>

using namespace std;

int main()
{
  const string Password = "123456789qw";

  string n;

  for (int i = 1; i <= 3; i++)
  {
    cin >> n;

    if (Password != n)
    {
      cout << '1' << endl;
    }else
    {
      cout << '2' << endl;
      break;
    }
  }
  
}