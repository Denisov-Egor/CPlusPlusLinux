#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n;
  int j = 0;

  cin >> n;

  vector<int> a(n);

  for (int i = 0; i < a.size(); i++)
  {
    cin >> a[i];
  }

  for (int x : a)
  {
    if (x >= 0)
    {
      j++;
    }
  }
  cout << j;
  
}