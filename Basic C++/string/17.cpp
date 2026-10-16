#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
  string text;

  getline(cin, text);

  for (int i = 0; i < text.length(); i++)
  {
    if (isdigit(text[i]))
    {
      text.erase(i, 1);
      i--;
    } 
  }
  cout << text;
}
