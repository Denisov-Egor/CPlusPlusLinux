#include <iostream>

using namespace std;

int main()
{
  int choice;

  cout << "Введите число от 1 до 4: ";

  cin >> choice;

  switch (choice)
  {
  case 1:
    cout << "Информация о программе" << endl;
      break;
    case 2:
      cout << "Начало игры" << endl;
      break;
    case 3:
      cout << "Настройки программы" << endl;
      break;
      case 4:
        cout << "Выход из программы" << endl;
      return 0;
  }

}
