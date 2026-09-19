#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
  string text;
  string longestWord;
  string word;

  getline(cin, text);

  for (int i = 0; i < text.length(); i++)
  {
    if (!isspace(text[i]))
    {
      word += text[i];
    }else
    {
      if (word.length() > longestWord.length())
      {
        longestWord = word;
      }
      word.clear();
    }
  }
  if (word.length() > longestWord.length())
  {
    longestWord = word;
  }
  cout << longestWord;
}