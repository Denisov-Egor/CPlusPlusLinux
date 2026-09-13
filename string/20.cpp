#include <iostream>
#include <string>

using namespace std;

int main()
{
  string text;
  int start;
  int length;

  getline(cin, text);

  cin >> start;
  cin >> length;

  cout << text.erase(start, length);
}