#include <iostream>

using namespace std;

void printMenu()
{
  cout << 
  R"(=== CALCULATOR ===

  1. Add
  2. Subtract
  3. Multiply
  4. Divide
  5. Square
  6. Exit

  Choose: )";
}

void inputNumbers(int& a, int& b)
{
  cout << "Введите первое число: ";
  cin >> a;

  cout << "Введите второе число: ";
  cin >> b;
}

void inputNumberSquare(int& a)
{
  cout << "Введите первое число: ";
  cin >> a;
}

int add(int a, int b)
{
  return a + b;
}

int subtract(int a, int b)
{
  return a - b;
}

int multiply(int a, int b)
{
  return a * b;
}

double divide(double a, double b)
{
  return a / b;
}

int square(int a)
{
  return a * a;
}

int main()
{
  int a, b;
  int res;
  double res1;
  char chose;

  while (true)
  {
    printMenu();

    cin >> chose;

    switch (chose)
    {
    case '1':
      inputNumbers(a, b);

      res = add(a, b);
      cout << "Результат:" << res << endl;
      break;
    
    case '2':
      inputNumbers(a, b);

      res = subtract(a, b);
      cout << "Результат:" << res << endl;
      break;
  
    case '3':
      inputNumbers(a, b);

      res = multiply(a, b);
      cout << "Результат:" << res << endl;
      break;
  
    case '4':
      inputNumbers(a, b);

      while (b == 0)
      {
        cout << "Ошибка: нельзя делить на ноль, введите заново: ";
        cin >> b;
      }
            
      res1 = divide(a, b);
      cout << "Результат:" << res1 << endl;
      break;
  
    case '5':
      inputNumberSquare(a);
  
      res = square(a);
      cout << "Результат:" << res << endl;
      break;
  
    case '6':
      cout << "Выход...";
      break;
  
    default:
      cout << "Такой операции нет" << endl;
      break;
    }

    if (chose == '6')
    {
      break;
    }
  }

}