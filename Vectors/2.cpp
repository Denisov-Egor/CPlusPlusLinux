#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n;
  int sum = 0;

  cin >> n;

  vector<int> a(n);

  for (int i = 0; i < a.size(); i++)
  {
    cin >> a[i];

    sum += a[i];
  }
  
  cout << sum;
}