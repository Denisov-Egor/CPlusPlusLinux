#include <iostream>

using namespace std;

int main()
{
  bool prime;

  int A, B;
  int count = 0;

  cin >> A >> B;

  for (int number = A; number <= B; number++)
  {
    prime = true;

    if (number < 2)
    {
      prime = false;
    }

    for (int i = 2; i < number; i++)
    {
      if (number % i == 0)
      {
        prime = false;
        break;
      }
    }    
    if (prime)
    {
      cout << number << " ";
      count++;
    }
  }
  cout << count;
}