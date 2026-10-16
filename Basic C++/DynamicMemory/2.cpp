#include <iostream>

using namespace std;

int main()
{
  double* a = new double;
  double* b = new double;
  
  char choise;

  cin >> *a >> choise >> *b;

  switch (choise) 
  {
    case '+':
      cout << *a + *b;
    break;

    case '-':
      cout << *a - *b;
    break;

    case '*':
      cout << *a * *b;
    break;

    case '/':
      if (*b != 0)
      {
        cout << *a / *b; 
      }else 
      {
        cout << "Делитель не может быть равен 0.";
      }
    break;

    default:
      cout << "Такого оператора нет.";
    break;
  }

  delete a;
  a = nullptr;
  
  delete b;
  b = nullptr;

  if (a == nullptr && b == nullptr)
  {
    cout << endl << "Укащатели очищены";
  }
  
}