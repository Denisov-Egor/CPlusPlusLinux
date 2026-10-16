#include <iostream>

using namespace std;

bool isEven(int n)
{
  return n % 2 == 0;
}

int main()
{
  int n;
  bool ItsEven;

  cin >> n;

  ItsEven = isEven(n);

  cout << boolalpha << ItsEven;

}