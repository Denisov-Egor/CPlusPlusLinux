#include <iostream>
#include <string>

class Employee{
private:
  std::string name;
  int id;
  double salary;
public:
  Employee(const std::string& name, int id, double salary)
          : name(name), id(id), salary(salary)
  {}

  void displayInfo() const{
    std::cout << "Имя: " 
              << name 
              << '\n';
    
    std::cout << "ID: " 
              << id 
              << '\n';
    
    std::cout << "Зарплата: " 
              << salary 
              << '\n'; 
  }
};

class Developer : public Employee{
private:
  std::string programmingLanguage;
public:
  Developer(const std::string& name, int id, double salary, 
            const std::string& programmingLanguage)
            : Employee(name, id, salary),
              programmingLanguage(programmingLanguage)
  {}

  void displayInfo() const{
    Employee::displayInfo();

    std::cout << "Язык программирования: "
              << programmingLanguage
              << '\n';
  }
};

class Manager : public Employee{
private:
  int subordinatesCount;
public:
  Manager(const std::string& name, int id, double salary, 
          int subordinatesCount)
          : Employee(name, id, salary),
            subordinatesCount(subordinatesCount)
  {}

  void displayInfo() const{
    Employee::displayInfo();

    std::cout << "Количество подчинённых: "
              << subordinatesCount
              << '\n';
  }
};

void runApplication(){
  Developer developer("Алексей", 101, 120000, "C++");
  Manager manager("Дмитрий", 102, 150000, 5);

  std::cout << "=== Разработчик ===\n";
  developer.displayInfo();

  std::cout << "\n=== Менеджер ===\n";
  manager.displayInfo();
}

int main(){
  runApplication();

  return 0;
}