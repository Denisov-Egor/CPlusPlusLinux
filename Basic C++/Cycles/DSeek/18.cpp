#include <iostream>
#include <string>

using namespace std;

int main()
{
  const string Password = "123456789";
  string Pass;


  for (int i = 1; i <= 3; i++)
  {
    if (Pass != Password)
    {
      cin >> Pass;
    }else
    {
      cout << "dsfs";
      break;
    }
  }
  
}