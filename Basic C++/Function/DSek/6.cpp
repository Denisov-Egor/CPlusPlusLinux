#include <iostream>

using namespace std;

bool isEven(int n)
{
  return (n % 2 == 0);
}

int main()
{
 int n1, n2;

 cin >> n1 >> n2;
 
 cout << (isEven(n1) ? "Yes" : "No");
 cout << endl;
 cout << (isEven(n2) ? "Yes" : "No");
}