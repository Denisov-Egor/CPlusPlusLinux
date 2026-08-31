#include <iostream>
#include <climits>

using namespace std;

int main()
{
  int num;
  int minNum = INT_MAX; 
  
  do
  {
    cin >> num;
    
    if (num != 0)
    {
      if (num < minNum)
      {
        minNum = num;
      }
    }
  } while (num != 0);
  
  cout << minNum;

}