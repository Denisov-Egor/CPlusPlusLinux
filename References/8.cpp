#include <iostream>
#include <string>

using namespace std;

void addText(string& text)
{
  text += "C++";
}

int main()
{
  string text = "Hello ";

  addText(text);

  cout << text;
}