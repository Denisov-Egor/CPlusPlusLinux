#include <iostream>
#include <string>

using namespace std;

int main()
{
  string text;

  getline(cin, text);

  for (int i = 0; i < text.length(); i++)
  {
    if (text[i] == ' ')
    {
      text.erase(i, 1);
      i--;
    }
    
  }
  cout << text;
}