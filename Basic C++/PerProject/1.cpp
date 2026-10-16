#include <iostream>
#include <string>

using namespace std;

int main()
{
  const string SECRET = "constanta";
  string word = SECRET;
  string guessed(word.length());

  string input;
  
  int attempts = 6;

  while (attempts > 0 && guessed != word)
  {
    cin >> input;
  }
}