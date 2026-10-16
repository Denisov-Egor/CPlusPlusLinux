#include <iostream>
#include <string>

using namespace std;

int main()
{
  string text;

  getline(cin, text);

  cout << text[0] << endl;
  cout << text[text.length() - 1];
  
}
