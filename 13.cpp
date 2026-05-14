#include <iostream>

using namespace std;

double ada(double celsius) {
    return celsius * 9.0 / 5.0 + 32;
}

double dewew(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main()
{
  int tempC, tempF;

  cin >> tempC;
  cin >> tempF;

  cout << tempC << ada(tempC) << endl;
  cout << tempF << dewew(tempF) << endl;
}

