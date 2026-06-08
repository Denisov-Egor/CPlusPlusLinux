#include <iostream>

using namespace std;

void printTime(int totalSeconds)
{
  int hours = totalSeconds / 3600;
  int minutes = (totalSeconds % 3600) / 60;
  int seconds = totalSeconds % 60; 

  cout << hours << minutes << seconds;
}

int main()
{
  int totalSeconds;

  cin >> totalSeconds;

  printTime(totalSeconds);
}