#include <iostream>

using namespace std;

void Menu()
{
  cout << R"(
  ========== BANK ACCOUNT ==========
  
  1. Пополнить счёт
  2. Снять деньги
  3. Показать баланс
  0. Выход
  
  Выберите действие:
  )";
}

class BankAccount
{
private:
  double balance = 0.0;
public:
  double getBalance() const
  {
    return balance;
  }

  bool deposit(double amount)
  {
    if (amount <= 0)
    {
      return false;
    }
    
    balance += amount;
    return true;
  }

  bool withdraw(double amount)
  {
    if (amount <= 0 || balance < amount)
    {
      return false;
    }
    
    balance -= amount;
    return true;
  }
};

int main()
{
  BankAccount bank;
  int choice = -1;
  double amount;

  while (choice != 0)
  {
    Menu();
    cin >> choice;

    switch (choice)
    {
    case 1:
      cout << "Введите сумму: ";
      cin >> amount;

      if (bank.deposit(amount))
      {
        cout << "Баланс успешно пополнен.\n";
      }else
      {
        cout << "Сумма должна быть больше нуля.\n";
      }      
      break;

    case 2:
      cout << "Введите сумму снятия: ";
      cin >> amount;

      if (bank.withdraw(amount))
      {
        cout << "Средства успешно сняты.\n";
      }else
      {
        cout << "Ошибка: некорректная сумма или недостаточно средств.\n";
      }
      break;

    case 3:
        cout << "Текущий баланс: " << bank.getBalance() << '\n';
      break;

    case 0:
      cout << "Выход из программы.\n";
      break;
    
    default:
      cout << "Неизвестная команда.\n";
      break;
    }
  }
  
}