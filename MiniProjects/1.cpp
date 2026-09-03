#include <iostream>

using namespace std;

void printMenu()
{
  cout <<
  R"(=== КОНВЕРТЕР ===

  1. Цельсии -> Фаренгейты
  2. Фаренгейты -> Цельсии
  3. Километры -> Мили
  4. Мили -> Километры
  5. Выход

  Выберите действие: )";
}

double celsiusToFahrenheit(double celsius)
{
  return celsius * 9 / 5 + 32;
}

double fahrenheitToCelsius(double fahrenheit)
{
  return (fahrenheit - 32) * 5 / 9;
}
double kilometersToMiles(double kilometers)
{
  return kilometers * 0.621371;
}
double milesToKilometers(double miles)
{
  return miles * 1.60934;
}

int main()
{
  double celsius;
  double fahrenheit;
  double kilometers;
  double miles;

  double res;

  char chose;

  while (true)
  {
    printMenu();
  
    cin >> chose;
    
    switch (chose)
    {
    case '1':
      cout << "Введите цельсии: ";
      cin >> celsius;
  
      res = celsiusToFahrenheit(celsius);
      cout << "Перевод из цельсии в форенгейт: " << res << endl;
      break;
  
    case '2':
      cout << "Введите форенгейт: ";
      cin >> fahrenheit;
  
      res = fahrenheitToCelsius(fahrenheit);
      cout << "Перевод из форенгейт в цельсии: " << res << endl;
      break;
  
    case '3':
      cout << "Введите километры: ";
      cin >> kilometers;
  
      res = kilometersToMiles(kilometers);
      cout << "Перевод из километров в мили:: " << res << endl;
      break;
  
    case '4':
      cout << "Введите милли: ";
      cin >> miles;
  
      res = milesToKilometers(miles);
      cout << "Перевод из миль в километры:: " << res << endl;
      break;
  
    case '5':
      cout << "Выход...";
      break;
    
    default:
    cout << "Такой операции нет: " << endl;
      break;
    }
    
    if (chose == '5')
    {
      break;
    }
  }
  

}