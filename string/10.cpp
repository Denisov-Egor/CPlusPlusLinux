#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
  string text;

  int count = 0;

  getline(cin, text);

  for (int i = 0; i < text.length(); i++)
  {
    if (isalpha(text[i]))
    {
      count++;
    }
    
  }
  cout << count;
}