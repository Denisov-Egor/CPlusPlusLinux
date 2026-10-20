#include <iostream>
#include <string>
#include <limits>

using namespace std;

enum Priority
{
  Low, 
  Medium,
  High
};

struct Task
{
  string name;
  Priority priority;
};

int main()
{
  int priorityNumber;
  Task task[3];

  for (int i = 0; i < 3; i++)
  {
    cout << "Введите задачу: ";
    getline(cin, task[i].name);

    cout << "Введите приритет задачи: ";
    cin >> priorityNumber;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    switch (priorityNumber) 
    {
      case 1:
        task[i].priority = Low;
      break;

      case 2:
        task[i].priority = Medium;
      break;

      case 3:
        task[i].priority = High;
      break;

      default:
      cout << "Не верный номер: ";
      break;
    }
  }

  for (int i = 0; i < 3; i++)
  {
    cout << "Задача: " << task[i].name << '\n';

    switch (task[i].priority)
    {
    case Low:
      cout << "Низкий" << '\n';
    break;

    case Medium:
      cout << "Средний" << '\n';
    break;

    case High:
      cout << "Высокий" << '\n';
    break;
    
    default:
      break;
    }
  }
    
}
