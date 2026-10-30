#include <iostream>

using namespace std;

class Temperature
{
private:
  double temperature = 0.0;

public:
  void setTemperature(double value)
  {
    temperature = value;
  }

  double getTemperature() const
  {
    return temperature;
  }

};

int main()
{
  Temperature temp;
  double value;

  cin >> value;

  temp.setTemperature(value);
  cout << "Temperature: " << temp.getTemperature();

  temp.setTemperature(-10.0);
  cout << "Temperature: " << temp.getTemperature();
}