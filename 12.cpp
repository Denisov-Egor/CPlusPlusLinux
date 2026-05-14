#include <iostream>
#include <string>

using namespace std;

struct Student
{
  string name;
  int age;
  double grade;
};

int main()
{
  int SIZE;

  cin >> SIZE;

  Student students[SIZE];

  for (int i = 0; i < SIZE; i++) {
        cout << "\nВведите данные для студента " << i + 1 << ":\n";
        
        cout << "Имя: ";
        cin.ignore(); // очищаем буфер перед getline (после предыдущего ввода)
        getline(cin, students[i].name);
        
        cout << "Возраст: ";
        cin >> students[i].age;
        
        cout << "Оценка: ";
        cin >> students[i].grade;
    }

  cout << "\n\nСписок студентов:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "Студент " << i + 1 << ": "
             << students[i].name << ", "
             << students[i].age << " лет, "
             << "оценка: " << students[i].grade << endl;
    }
}