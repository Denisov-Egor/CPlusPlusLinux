#include <iostream>
#include <string>

using namespace std;

int main()
{
  string text;
  char oldChar;
  char newChar;

  getline(cin, text);

  cin >> oldChar;
  cin >> newChar;

  for (int i = 0; i < text.length(); i++)
  {
    if (text[i] == oldChar)
    {
      text[i] = newChar;
    }
  }
  cout << text;
}
