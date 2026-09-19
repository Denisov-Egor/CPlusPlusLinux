#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
  string text;
  string shortestWord;
  string word;

  getline(cin, text);

  for (int i = 0; i < text.length(); i++)
  {
    if (!isspace(text[i]))
    {
      word += text[i];
    }else
    {
      if (shortestWord.empty() || word.length() < shortestWord.length())
      {
        shortestWord = word;
      }
      word.clear();
    }    
  }
  
  if (shortestWord.empty() || word.length() < shortestWord.length())
  {
    shortestWord = word;
  }

  cout << shortestWord;
}