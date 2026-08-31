#include <iostream>

using namespace std;

int main()
{
  int n;
  int N;
  int max;

  cin >> n;
  cin >> N;
  max = N;
  
  for (int i = 0; i < n - 1; i++)
  {
    cin >> N;

    if (N > max)
    {
      max = N;
    }
  }
  cout << max;
}