#include <iostream>

using namespace std;

int main()
{
  int arr[3][4];

  int target;

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      cin >> arr[i][j];
    }
  }
  
  cout << "Cin target";
  cin >> target;

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      if (arr[i][j] == target)
      {
        cout << i << ' ' << j << endl;
      }
    }  
  }  
  
}