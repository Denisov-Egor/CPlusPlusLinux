#include <iostream>

using namespace std;

int main() 
{
  double a, b, c;
  cin >> a >> b >> c;
  if (a + b <= c || a + c <= b || b + c <= a) 
  {
      cout << "Треугольник не существует." << endl;
  } else 
  {
    if (a == b && b == c) 
    {
      cout << "Равносторонний треугольник." << endl;
    } else if (a == b || a == c || b == c) 
    {
      cout << "Равнобедренный треугольник." << endl;
    } else 
    {
      cout << "Разносторонний треугольник." << endl;
    }
  }
}