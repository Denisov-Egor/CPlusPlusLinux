#include <iostream>
#include <string>

using namespace std;

int main()
{
  string text;
  string search;
  int count = 0;

  getline(cin, text);
  getline(cin, search);

  int position = text.find(search);

  while (position != string::npos)
  {
    count++;
    position = text.find(search, position + search.length());
  }
    
  cout << count;
  
  
}