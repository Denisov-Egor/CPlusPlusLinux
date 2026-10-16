#include <iostream>
#include <string>

using namespace std;

int main()
{
  string s1, s2;

  cin >> s1 >> s2;

  char* str1 = new char[s1.size() + 1];
  char* str2 = new char[s2.size() + 1];

  for (int i = 0; i < s1.size(); i++)
  {
    str1[i] = s1[i];
  }

  for (int i = 0; i < s2.size(); i++)
  {
    str2[i] = s2[i];
  }
  
  str1[s1.size()] = '\0';
  str2[s2.size()] = '\0';

  char* result = new char[s1.size() + s2.size() + 1];

  for (int i = 0; i < s1.size(); i++)
  {
    result[i] = str1[i];
  }

  for (int i = 0; i < s2.size(); i++)
  {
    result[i + s1.size()] = str2[i];
  }

  result[s1.size() + s2.size()] = '\0';

  cout << result;

  delete [] str1;
  str1 = nullptr;

  delete [] str2;
  str2 = nullptr;

  delete [] result;
  result = nullptr;
}