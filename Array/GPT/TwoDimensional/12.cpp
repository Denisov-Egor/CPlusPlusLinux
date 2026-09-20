#include <iostream>

using namespace std;

int main()
{
  int arr[3][4];

  int even = 0;
  int odd = 0;

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      cin >> arr[i][j];
    }    
  }

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      if (arr[i][j] % 2 == 0)
      {
        even++;
      }else
      {
        odd++;
      }      
    }    
  }

  cout << even << odd;
  
  
}