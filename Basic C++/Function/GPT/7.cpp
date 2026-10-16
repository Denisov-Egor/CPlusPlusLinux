#include <iostream>

using namespace std;

void greet(string name = "User")
{
  cout << "Hello, " << name;
}

int main()
{
  string name;

  cin >> name;

  greet(name);

}