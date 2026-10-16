#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n;

  cin >> n;

  vector<int> a(n);

  for (int i = 0; i < a.size(); i++)
  {
    cin >> a[i];
  }
  
  for (int& x : a)
  {
    x *= 2;
    cout << x << ' ';
  } 
  
}