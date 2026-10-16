#include <iostream>

using namespace std;

int main()
{
  int A, B;
  int res = 0;

  cin >> A >> B;

  for (int i = A; i <= B; i++)
  {
    res += i;
  }

  cout << res;
}