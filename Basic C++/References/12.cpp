#include <iostream>
#include <string>

using namespace std;

int getLength(const string& text, int& length)
{
  for (int i = 0; i < text.length(); i++)
  {
    length++;
  }

  return length;
}

int main()
{
  int length = 0;

  string text = "C++ Developer";

  getLength(text, length);

  cout << length;
}