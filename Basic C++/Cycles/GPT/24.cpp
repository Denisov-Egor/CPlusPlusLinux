#include <iostream>

using namespace std;

int main()
{
  int N;
  int n;
  int sum = 0;

  cin >> N;

  for (int i = 0; i < N; i++)
  {
    cin >> n;
    
    if (n == 0)
    {
      continue;
    }else
    {
      sum += n;
    }
  }
  cout << sum;
}