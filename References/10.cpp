#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void countLetters(const string& text, int& letters)
{
  for (int i = 0; i < text.length(); i++)
  {
    if (isalpha(text[i]))
    {
      letters++;
    }
  }
}

int main()
{
  int letters = 0;

  const string text = "Hello123"; 

  countLetters(text, letters);

  cout << letters;
}