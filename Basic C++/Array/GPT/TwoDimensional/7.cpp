#include <iostream>

using namespace std;

int main()
{
  int arr[3][4];

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      cin >> arr[i][j];
    }
  }
  
  for (int j = 0; j < 4; j++)
  {
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
      sum += arr[i][j];
    }
    cout << "Столбец " << j << ": сумма" << sum << endl;
  }
  
}