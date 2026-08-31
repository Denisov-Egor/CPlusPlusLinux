#include <iostream>

using namespace std;

int main()
{
  bool ItsPalindrome;

  int original;
  int number;
  int digit;
  int reverse = 0;

  cin >> number;
  original = number;

  while (number != 0)
  {
    digit = number % 10;
    reverse = reverse * 10 + digit;
    number = number / 10;  

    if (reverse == original)
    {
      ItsPalindrome = true;
    }else
    {
      ItsPalindrome = false;
    }
  }
  cout << reverse << endl;
  cout << boolalpha << ItsPalindrome;
}