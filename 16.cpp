#include <iostream>

using namespace std;

int main()
{
  int n, i = 0;
  

  cin >> n;
  

  for (int i = 0; i < n; i++)
  {
    cout << i << endl;
  }
  

  while (i < n)
  {
   cout << i << endl;
   i++;
  }
  
  do
  {
    cout << i << endl;
    i++;
  } while (i < n);
  
}