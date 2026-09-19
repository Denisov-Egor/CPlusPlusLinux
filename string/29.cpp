#include <iostream>
#include <string>
#include <cctype>
#include <map>

using namespace std;

int main()
{
  string text;
  string word;
  string mostFrequentWord;
  int maxCount = 0;

  getline(cin, text);
 
  map<string, int> words;

  for (int i = 0; i < text.length(); i++)
  {
    if (!isspace(text[i]))
    {
      word += text[i];
    }else 
    {
      words[word]++;  
      word.clear();
    }
    
  }
  words[word]++;

  for (const auto& pair : words)
  {
    if (pair.second > maxCount)
    {
      maxCount = pair.second;
      mostFrequentWord = pair.first;
    }
  }

  cout << mostFrequentWord;
  cout << maxCount;
}