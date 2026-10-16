#include <iostream>

using namespace std;

void hello(string name = "User")
{
  cout << "Name: " <<   name;
}

int main()
{
  string name;

  cin >> name;

  hello(name);
}