#include <iostream>

using namespace std;

void Menu()
{
  cout << R"(
    1) увличить на еденицу
    2) уменьшить на еденицу
    3) прировнять нулю 
    4) вывести
    0) выход

    Выберите дейсвие:
  )";
}

class Counter
{
private:
  int count = 0;

public:
  void increment()
  {
    count++;
  }

  void decrement()
  {
    if (count > 0)
    {
      count--;
    }else if (count <= 0)
    {
      cout << "Ошибка";
    }
  }

  void reset()
  {
    count = 0;
  }

  int getCount() const
  {
    return count;
  }
};

int main()
{
  Counter count;

  char choice = ' ';

  while (choice != '0')
  {
    Menu();
    cin >> choice;

    switch (choice)
    {
    case '1':
      count.increment();
      break;

    case '2':
      count.decrement();
      break;

    case '3':
      count.reset();
      break;

    case '4':
      cout << "Текущее значение: " << count.getCount() << '\n';
      break;

    case '0':
      cout << "Выход.";
      break;
    
    default:
    cout << "Не верное число.";
      break;
    }    
  }
}