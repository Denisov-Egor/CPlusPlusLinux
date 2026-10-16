#include <iostream>
#include <string>

using namespace std;

int main()
{
  string text;
  char findSpace = ' ';
  int count = 0;

  getline(cin, text);

  for (int i = 0; i < text.length(); i++)
  {
    if (findSpace == text[i])
    {
      count++;
    }
    
  }
  cout << count;
}
