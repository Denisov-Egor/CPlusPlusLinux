#include <iostream>
#include <string>

using namespace std;

void printText(const string& text)
{
  cout << text;
}

int main()
{
  string text = "C++ Developer";

  printText(text);
}