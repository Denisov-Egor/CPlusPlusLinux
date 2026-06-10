#include <iostream>
#include <string>

using namespace std;

int main()
{
  string FullName;
  string Number;

  double Balance;
  double ReplenishBalance, TakeOffBalance;
  double BalanceBalance;

  char Choice;

  cout << "Введите фио: ";
  cin >> FullName;
  cout << "Номер телефона: ";
  cin >> Number;

  cout << "Введите баланс счёта: ";
  cin >> Balance;

  while (true)
  {
    cout << "Выберете что нужно сделать с помощбю меню (от 1 до 4)"
            "\n 1 - пополнить счёт"
            "\n 2 - снять со счёта"
            "\n 3 - проверить баланс счёт"
            "\n 4 - выйти счёт" << endl;
  
    cin >> Choice;
  
    switch (Choice)
    {
    case '1':
      cout << "\nНа сколько вы хотите пополнять баланс: ";
      cin >> ReplenishBalance;
      Balance += ReplenishBalance;
      break;
    case '2':
      cout << "Сколько вы хотетя снять с баланса: ";
      cin >> TakeOffBalance;

      if (TakeOffBalance <= Balance) 
        {
        Balance -= TakeOffBalance; 
        } else {
        cout << "Недостаточно средств на счете!" << endl;
          }
      break;
    case '3':
      cout << "Ваш баланс = ";
      cout << Balance << endl;
      break;
    case '4':
      cout << "Выход";
      return 0;
      break;
    
    default:
    cout << "Неправильный вобор попробуйте снова";
      break;
    }
  }
}