#include <iostream>
#include <string>

using namespace std;

void showMenu()
{
  cout << 
  R"(
  1. Показать игрока
  2. Показать врага
  3. Атака игрока
  4. Атака врага
  5. Получить золото
  0. Выход

  Введите пункт меню

  )";
}

struct Player
{
  string name = "Fastik";
  int health = 100;
  int attack = 30;
  int gold = 0;
};

struct Enemy
{
  string name = "Goblin";
  int health = 60;
  int attack = 20;
  int gold = 50;
};

int main()
{
  Player player;
  Enemy enemy;
  int choice = -1;
  bool reward = false;
  
  while (choice != 0) 
  {
    showMenu();

    cin >> choice;
  
    switch (choice)
    {    
      case 1:
        cout << player.name << '\n';
        cout << player.health << '\n';
        cout << player.attack << '\n';
        cout << player.gold << '\n';
      break;
  
      case 2:
        cout << enemy.name << '\n';
        cout << enemy.health << '\n';
        cout << enemy.attack << '\n';
        cout << enemy.gold << '\n';
      break;
      
      case 3:
        if (enemy.health > 0)
        {
          enemy.health -= player.attack;
          cout << "Атака была произведена";
        }else
        {
          cout << "Враг мертв";
        }
        
        if (enemy.health < 0)
        {
          enemy.health = 0;
          cout << "Враг мертв";
        }
      break;

      case 4:
        if (player.health > 0)
        {
          player.health -= enemy.attack;
          cout << "Атака была произведена";
        }else
        {
          cout << "Игрок мертв";
        }
        if (player.health < 0)
        {
          player.health = 0;
          cout << "Игрок мертв";
        }
      break;

      case 5:
        if (!reward)
        {
          if (enemy.health <= 0)
          {
            player.gold += enemy.gold;
            cout << "Золото получено";
            reward = true;
          }else
          {
            cout << "Враг еще жив вы не можете получить золото";
          }
        }else
        {
          cout << "Вы уже получили золото";
        }
      break;
      
      default:
      cout << "Неверный пункт меню";
        break;
    }
  }
}