#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main()
{
  const string symbols = "0123456789"
                           "abcdefghijklmnopqrstuvwxyz"
                           "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

  srand(time(NULL));
  int index;
  string password;

  int legs;

  cin >> legs;

  for (int i = 0; i < legs; i++)
  {
    index = rand() % symbols.size();
    password += symbols[index];
  }
  
  cout << password;
}
