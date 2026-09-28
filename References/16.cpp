#include <iostream>

using namespace std;

void statistics(const int (&arr)[10], int& sum, double& avg, int& min, int& max )
{
  sum = 0;

  min = arr[0];
  max = arr[0];

  for (int i = 0; i < 10; i++)
  {
    sum += arr[i];

    if (arr[i] < min)
    {
      min = arr[i];
    }

    if (arr[i] > max)
    {
      max = arr[i];
    }
  }

  avg = double(sum) / 10;
}

int main()
{
  int arr[10] = { 5,8,2,9,1, 4,7,3,6,10};
  int sum = 0;
  double avg = 0;
  int min = 0;
  int max = 0;

  statistics(arr, sum, avg, min, max);

  cout << "Sum: " << sum << endl;
  cout << "Average: " << avg << endl;
  cout << "Min: " << min << endl;
  cout << "Max: " << max << endl;
}