#include <iostream>
#include <string>

using namespace std;

int main() 
{
  string text;

  cin >> text;

  int left = 0;
  int right = text.length() - 1;
    
  while (left < right) 
  {
    swap(text[left], text[right]);
    left++;
    right--;
  }
  cout << text;
}