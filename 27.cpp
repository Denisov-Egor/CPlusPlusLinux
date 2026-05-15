#include <iostream>
#include <string>

using namespace std;

int main()
{
  const string Login = "admin";
  const string Password = "1234";
  
  string login, password;

  cin >> login >> password;

  if (Login == login && Password == password)
  {
    cout << "daa";
  }else
  {
    cout << "45";
  }
  
  
}