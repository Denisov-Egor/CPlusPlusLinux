#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n;
  int max;
  int maxIndex;
  
  cin >> n;
  
  vector<int> a(n);
  
  for (int i = 0; i < a.size(); i++)
  {
    cin >> a[i];
  }

  max = a[0];
  maxIndex = 0;

  for (int i = 0; i < a.size(); i++)
  {
    if (a[i] > max)
    {
      max = a[i];
      maxIndex = i;
    }
  }
  
  cout << maxIndex;
}