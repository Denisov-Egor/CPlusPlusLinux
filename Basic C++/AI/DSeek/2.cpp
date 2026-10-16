// Реализуйте игру "Угадай число". Программа должна загадывать случайное число и предлагать пользователю угадать его, пока он не угадает.
#include <iostream>
#include <cstdlib> 
#include <ctime> 

using namespace std;

int main()
{
  srand(static_cast<unsigned int>(std::time(nullptr)));

    int secretNumber = std::rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << secretNumber;

    do
    {
      ++attempts;
      cout << "Введить ваше число:";
      cin >> guess;
      if (guess > secretNumber)
      {
        cout << "dsfs" << endl;
      }else if (guess < secretNumber)
      {
        cout << "wqd" << endl;
      }
    } while (secretNumber != guess);

    cout << "Поздравляем! Вы угадали число " << secretNumber << " за " << attempts << " попыток." << std::endl;
}
