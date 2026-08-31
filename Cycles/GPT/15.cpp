#include <iostream>

using namespace std;

int main()
{
  int N;
  int number;

  int max;
  int min;

  int sum = 0;

  int positive = 0;
  int negative = 0;
  int zero = 0;

  cin >> N;

  cin >> number;

  max = number;
  min = number;

  if (number != 0)
  {
    sum += number;
  }

  if (number > 0)
  {
    positive++;
  }

  if (number < 0)
  {
    negative++;
  }

  if (number == 0)
  {
    zero++;
  }

  for (int i = 0; i < N - 1; i++)
  {
    cin >> number;

    if (number > max)
    {
      max = number;
    }

    if (number < min)
    {
      min = number;
    }

    if (number > 0)
    {
      positive++;
    }

    if (number < 0)
    {
      negative++;
    }

    if (number == 0)
    {
      zero++;
      continue;
    }

    sum += number;
  }

  cout << "Max: " << max << endl;
  cout << "Min: " << min << endl;
  cout << "Sum: " << sum << endl;
  cout << "Positive: " << positive << endl;
  cout << "Negative: " << negative << endl;
  cout << "Zero: " << zero << endl;
}