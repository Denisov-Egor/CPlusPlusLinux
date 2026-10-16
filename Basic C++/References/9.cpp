#include <iostream>
#include <string>

using namespace std;

void clearText(string& text)
{
  text.clear();
}

int main()
{
  string text = "Hello";

  clearText(text);

  cout << text;
}