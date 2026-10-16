#include <iostream>
#include <string>

using namespace std;

int main()
{
  string text;
  char findChar;
  int count = 0;

  getline(cin, text);
  cin >> findChar;

  for (int i = 0; i < text.length(); i++)
  {
    if (findChar == text[i])
    {
      count++;
    }
  }
  cout << "Символ '" << findChar  << "' встречается: " << count;
}