#include <iostream>

using namespace std;

int main()
{
  int N;
  int n;
  int max = 0;
  int sum = 0;

  cin >> N;

  for (int i = 0; i < N; i++)
  {
    cin >> n;

    if (n % 2 == 0)
    {
      sum += n;
    }

    if (n > max)
    {
      max = n;
    }
    
  }
  cout << sum << endl;
  cout << max;
}