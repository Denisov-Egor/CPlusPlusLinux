#include <iostream>

using namespace std;

void deposit(double& balance, double money)
{
  cout << "Введите сумму для пополнения: ";
  cin >> money;

  balance += money;
}

void withdraw(double& balance, double money)
{
  cout << "Введите сумму для снятия: ";
  cin >> money;

  balance -= money;
}

int main()
{
  double balance, money;

  cout << "Введите баланс: ";
  cin >> balance;

  deposit(balance, money);

  cout << "Ваш баланс после поплнения: " << balance << '\n';

  withdraw(balance, money);

  cout << "Ваш баланс после снятия: " << balance;
}