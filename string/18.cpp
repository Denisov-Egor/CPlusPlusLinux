#include <iostream>
#include <string>

using namespace std;

int main()
{
  string text;
  string world;

  getline(cin, text);
  getline(cin, world);

  size_t position = text.find(world);

  if (position != string::npos)
  {
    cout << position;
  } else
  {
    cout << "Error";
  }
}