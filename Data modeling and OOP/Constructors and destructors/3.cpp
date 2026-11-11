#include <iostream>
#include <string>
#include <limits>

void Menu()
{
  std::cout << "\n=== Создание пользователя ===\n"
  << "1. Создать профиль только с именем\n"
  << "2. Создать профиль с именем и возрастом\n"
  << "3. Создать полный профиль\n"
  << "0. Выход\n";
}

class User
{
private:
  std::string name;
  int age;
  std::string email;
public:
User()
    : name("Неизвестно"), age(18), email("Не указан")
{
  
}

User(const std::string& userName)
: name(userName), age(18), email("Не указан")
{
  
}

User(const std::string& userName, int userAge)
    : name(userName), age(userAge), email("Не указан")
{
  
}

User(const std::string& userName, int userAge, const std::string& userEmail)
    : name(userName), age(userAge), email(userEmail)
{

}

void displayInfo() const
{
  std::cout << "Имя: " << name << '\n';
  std::cout << "Возраст: " << age << '\n';
  std::cout << "Электронная почта: " << email << '\n';
  std::cout << "------------------------\n";
}
};

int main()
{
  std::string name;
  int age = 0;
  std::string email;

  int choice = -1;

  while (choice != 0)
  {
    Menu();

    std::cout << "Выберите вариант: ";
    while (!(std::cin >> choice))
    {
      std::cout << "Ошика: введите число.\n";

      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    switch (choice)
    {
    case 1:
    {
      std::cout << "Введите имя: ";
      std::getline(std::cin, name);

      User user(name);
      user.displayInfo();
    }
      break;

      case 2:
      {
        std::cout << "Введите имя: ";
        std::getline(std::cin, name);

        std::cout << "Введите возраст: ";
        while (!(std::cin >> age))
        {
          std::cout << "Ошика: введите число.\n";

          std::cin.clear();
          std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

        User user(name, age);
        user.displayInfo();
      }
        break;

      case 3:
        {
          std::cout << "Введите имя: ";
          std::getline(std::cin, name);

          std::cout << "Введите возраст: ";

          while (!(std::cin >> age))
          {
          std::cout << "Ошика: введите число.\n";

          std::cin.clear();
          std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
          }

          std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
          
          std::cout << "Введите почту: ";
          std::getline(std::cin, email);

          User user(name, age, email);
          user.displayInfo();
        }
        break;

      case 0:
        std::cout << "Выход.";
        break;

    default:
      std::cout << "Ошибка: не верный пунт меню.\n";
      break;
    }
  }
}
