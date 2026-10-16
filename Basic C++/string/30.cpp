#include <iostream>
#include <string>
#include <cctype>
#include <map>

using namespace std;

int countCharacters(const string& text)
{
  int count = 0;

  for (int i = 0; i < text.length(); i++)
  {
    count++;  
  }

  return count;
}

int countLetters(const string& text)
{
  int count = 0;

  for (int i = 0; i < text.length(); i++)
  {
    if (isalpha(text[i]))
    {
      count++;
    }
  }

  return count;
}

int countDigits(const string& text)
{
  int count = 0;

  for (int i = 0; i < text.length(); i++)
  {
    if (isdigit(text[i]))
    {
      count++;
    }
  }
  
  return count;
}

int countSpaces(const string& text)
{
  int count = 0;

  for (int i = 0; i < text.length(); i++)
  {
    if (isspace(text[i]))
    {
      count++;
    }
  }
  
  return count;
}

int countVowels(const string& text)
{
  int count = 0;
  string vowels = "aeiou";

  for (int i = 0; i < text.length(); i++)
  {
    if (isalpha(text[i]) && vowels.find(text[i]) != string::npos)
    {
      count++;
    }
  }
  
  return count;
}

int countConsonants(const string& text)
{
  int count = 0;
  string vowels = "aeiou";
  for (int i = 0; i < text.length(); i++)
  {
    if (isalpha(text[i]) && vowels.find(text[i]) == string::npos)
    {
      count++;
    }
  }
  return count;
}

int countWords(const string& text)
{
  int count = 0;

  for (int i = 0; i < text.length(); i++)
  {
    if (!isspace(text[i]) && (i == 0 || isspace(text[i - 1])))
    {
      count++;
    }
  }
  
  return count;
}

string findLongestWord(const string& text)
{
  string longestWord;
  string word;

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

  return longestWord;
}

string findShortestWord(const string& text)
{
  string shortestWord;
  string word;

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

  return shortestWord;
}

map<string, int> countWordFrequency(const string& text)
{
  map<string, int> words;
  string word;

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

  return words;
}

string findMostFrequentWord(const map<string, int>& words)
{
  string mostFrequentWord;
  int maxCount = 0;

  for (const auto& pair : words)
  {
    if (pair.second > maxCount)
    {
      maxCount = pair.second;
      mostFrequentWord = pair.first;
    }
  }

 return mostFrequentWord;
}

void printResults(
  int characters,
  int letters,
  int digits,
  int spaces,
  int vowels,
  int consonants,
  int words,
  string longestWord,
  string shortestWord,
  string mostFrequentWord,
  int frequency
)
{
  cout << "\n";
  cout << "============================\n";
  cout << "       TEXT ANALYZER\n";
  cout << "============================\n";

  cout << "\n[ CHARACTER ANALYSIS ]\n";
  cout << "Characters:  " << characters << "\n";
  cout << "Letters:     " << letters << "\n";
  cout << "Digits:      " << digits << "\n";
  cout << "Spaces:      " << spaces << "\n";
  cout << "Vowels:      " << vowels << "\n";
  cout << "Consonants:  " << consonants << "\n";

  cout << "\n[ WORD ANALYSIS ]\n";
  cout << "Words:       " << words << "\n";
  cout << "Longest:     " << longestWord << "\n";
  cout << "Shortest:    " << shortestWord << "\n";

  cout << "\n[ FREQUENCY ANALYSIS ]\n";
  cout << "Most frequent word: " << mostFrequentWord << "\n";
  cout << "Frequency:          " << frequency << "\n";

  cout << "\n============================\n";
}

int main()
{
  string text;

  getline(cin, text);

  int characters = countCharacters(text);
  int letters = countLetters(text);
  int digits = countDigits(text);
  int spaces = countSpaces(text);
  int vowels = countVowels(text);
  int consonants = countConsonants(text);

  int words = countWords(text);
  string longestWord = findLongestWord(text);
  string shortestWord = findShortestWord(text);

  map<string, int> wordFrequency = countWordFrequency(text);
  string mostFrequentWord = findMostFrequentWord(wordFrequency);

  printResults(
    characters,
    letters,
    digits,
    spaces,
    vowels,
    consonants,
    words,
    longestWord,
    shortestWord,
    mostFrequentWord,
    wordFrequency[mostFrequentWord]
  );
}