#include <iostream>
#include <string>

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
  User user1;
  User user2("Алексей");
  User user3("Егор", 20);
  User user4("Иван", 25, "ivan@example.com");

  user1.displayInfo();
  user2.displayInfo();
  user3.displayInfo();
  user4.displayInfo();
}
