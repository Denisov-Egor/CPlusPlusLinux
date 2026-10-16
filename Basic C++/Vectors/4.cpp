#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int max;
  int min;
  int n;

  cin >> n;

  vector<int> a(n);
  
  for (int i = 0; i < a.size(); i++)
  {
    cin >> a[i];
  }
  
  max = a[0];
  min = a[0];

  for(int x : a)
  {
    if (x > max)
    {
      max = x;
    }
    
    if (x < min)
    {
      min = x;
    }  
  }
  
  cout << max;
  cout << min;
}