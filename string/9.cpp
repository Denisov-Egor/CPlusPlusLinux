#include <iostream>
#include <string>

using namespace std;

int main()
{
  string text;

  int count = 0;

  getline(cin, text);

  for (int i = 0; i < text.length(); i++)
  {
    if (text[i] >= '0' && text[i] <= '9')
    {
      count++;
    }
      
  }
  cout << count;
}
