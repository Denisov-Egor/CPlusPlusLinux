#include <iostream>
#include <string>

using namespace std;

struct Student
{
  string name;
  int age;
  double averageGrade;
  int groupNumber;
};

int main()
{
  double remaining;
  Student student;

  cin >> student.name;
  cin >> student.age;  
  cin >> student.averageGrade;
  cin >> student.groupNumber;

  cout << student.name << '\n';
  cout << student.age << '\n';
  cout << student.averageGrade << '\n';
  cout << student.groupNumber << '\n';

  if (5.0 > student.averageGrade)
  {
    remaining = 5.0 - student.averageGrade;
    cout << remaining;
  }else
  {
    cout << "Максимальный балл";
  }

}