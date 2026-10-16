#include <iostream>
#include <string>

using namespace std;

int main()
{
  string text;
  string oldWord;
  string newWord;

  getline(cin, text);

  getline(cin, oldWord);
  getline(cin, newWord);

  int position = text.find(oldWord);

  cout << text.replace(position, oldWord.length(), newWord);
}
