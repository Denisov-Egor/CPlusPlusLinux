#include <iostream>
#include <string>

class User
{
private:
  std::string name;
  int age;
  std::string email;

public:
  User(std::string name, int age, std::string email)
      : name(name), age(age), email(email)
  {}

  User() 
      : User("неизвестно", 0, "unknown")
  {}

  User(std::string name) 
      : User(name, 0, "неизвестно")
  {}

  User(std::string name, int age) 
      : User(name, age, "неизвестно")
  {}

  void displayInfo() const
  {
    std::cout << "Имя: " << name << '\n';
    std::cout << "Возраст: " << age << '\n';
    std::cout << "Почта: " << email << '\n';
    std::cout << "-------------------\n";
  }

};

int main()
{
  User user1;
  User user2("Fastik");
  User user3("Lorex", 18);
  User user4("Egor", 30, "egor@example.com");

  user1.displayInfo();
  user2.displayInfo();
  user3.displayInfo();
  user4.displayInfo();

}