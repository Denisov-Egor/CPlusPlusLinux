#include <iostream>
#include <string>

using namespace std;

void Menu()
{
  cout << R"(
  ========== USER PROFILE MANAGER ==========

  1. Изменить имя
  2. Изменить возраст
  3. Изменить электронную почту
  4. Активировать аккаунт
  5. Деактивировать аккаунт
  6. Показать информацию
  0. Выход

  Выберите действие: 

  )";
}

class UserProfile
{
private:
  string name = "";
  int age = 0;
  string email = "";
  bool isActive = false;
public:
  string getName() const
  {
    return name;
  }

  int getAge() const
  {
    return age;
  }

  string getEmail() const
  {
    return email;
  }

  bool getIsActive() const
  {
    return isActive;
  }

  void setName(string newName)
  {
    if (newName.empty())
    {
      cout << "Имя не может быть пустым.\n";
      return;
    }

    name = newName;
    cout << "Имя успешно изменено.\n";
  }

  void setAge(int newAge)
  {
    if (newAge <= 0)
    {
      cout << "Возраст должен быть больше нуля.\n";
      return;
    }

    age = newAge;
    cout << "Возраст успешно изменён.\n";
  }

  void setEmail(string newEmail)
  {
    if (newEmail.empty())
    {
      cout << "Электронная почта не может быть пустой.\n";
      return;
    }
    
    if (newEmail.find("@") == string::npos)
    {  
      cout << "Электронная почта должна содержать символ @.\n";
      return;
    }
    
    email = newEmail;
    cout << "Электронная почта успешно изменена.\n";
  }

  void activate()
  {
    if (name.empty() || age <= 0 || email.empty())
    {
      cout << "Невозможно активировать аккаунт. Заполните все поля.\n";
      return;
    }

    isActive = true;
    cout << "Аккаунт успешно активирован.\n";
  }

  void deactivate()
  {
    isActive = false;
    cout << "Аккаунт деактивирован.\n";
  }

  void displayInfo() const
  {
    cout << "\n========== USER INFORMATION ==========\n";

    cout << "Имя: " << name << '\n';
    cout << "Возраст: " << age << '\n';
    cout << "Email: " << email << '\n';

    cout << "Статус: ";
    if (isActive)
    {
      cout << "Активен\n";
    }
    else
    {
      cout << "Неактивен\n";
    }
    cout << "======================================\n";
  }
};

int main()
{
  UserProfile user;

  string newName;
  int newAge;
  string newEmail;

  int choice = -1;

  while (choice != 0)
  {
    Menu();
    cin >> choice;

    switch (choice)
    {
      case 1:
        cout << "Введите имя: ";
        cin.ignore();

        getline(cin, newName);

        user.setName(newName);
        break;

      case 2:
        cout << "Введите возраст: ";
        cin >> newAge;

        user.setAge(newAge);
        break;

      case 3:
        cout << "Введите почту: ";
        cin >> newEmail;

        user.setEmail(newEmail);
        break;

      case 4:
        user.activate();
        break;

      case 5:
        user.deactivate();
        break;

      case 6:
        user.displayInfo();
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
