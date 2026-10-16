#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
  string text;
  bool palindrome = true;
  cin >> text;

  int left = 0;
  int right = text.length() - 1;

  while (left < right)
  {
    if (tolower(text[left]) != tolower(text[right]))
    {
      palindrome = false;
    } 
  left++;
  right--;    
  } 

  if (palindrome)
  {
    cout << "Палиндром";
  }
  else
  {
    cout << "Не палиндром";
  }
}
