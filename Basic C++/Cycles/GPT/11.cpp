#include <iostream>

using namespace std;

int main()
{
  int original;
  int number;
  int digit = 0;
  int sum = 0;
  int currentDigit;

  bool even;
  bool prime;

  cin >> number;
  original = number;

  if (number == 0)
  {
    digit = 1;
  }else
  {
    while (number != 0)
    {
      int currentDigit = number % 10;
      digit++;
      sum += currentDigit;
      number /= 10;
    }
  }

  even = (original % 2 == 0);

  if (original < 2)
  {
    prime = false;
  }
  else
  {
    prime = true;

    for (int i = 2; i < original; i++)
    {
      if (original % i == 0)
      {
        prime = false;
        break;
      }
    }
  }
  
  cout << "Digits: " << digit << endl;
  cout << "Sum: " << sum << endl;
  cout << "Even: " << boolalpha << even << endl;
  cout << "Prime: " << prime << endl;
}