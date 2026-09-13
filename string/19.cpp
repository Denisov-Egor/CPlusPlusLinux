#include <iostream>
#include <string>

using namespace std;

int main()
{
  string text;
  int n;

  getline(cin, text);
  cin >> n;

  cout << text.substr(0, n);
  
}