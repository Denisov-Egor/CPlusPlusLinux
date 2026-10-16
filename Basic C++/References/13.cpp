#include <iostream>
#include <string>

using namespace std;

void getLength(const string& text, int& length)
{
  length = text.length();
}

int main()
{
  int length = 0;

  string text = "C++ Developer";

  getLength(text, length);

  cout << length;
}