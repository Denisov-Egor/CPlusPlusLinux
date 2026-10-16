#include <iostream>

using namespace std;

int main()
{
  int n, a = 0, b = 1, nextTerm;

  cin >> n;

  for (int i = 3; i <= n; i++)
  {
    nextTerm = a + b;
    a = b;
    b = nextTerm;
    cout << nextTerm << endl;
  }
  
}