#include <iostream>
#include <ctime>

using namespace std;

int main()
{
  srand(static_cast<unsigned int>(time(nullptr)));

  int secretNumber = std::rand() % 100 + 1;
  int gues;
  int attemps;

  cout << secretNumber;
  do
  {
    attemps++;
    cin >> gues;
    if (secretNumber > gues)
    {
      cout << "dsfsfs";
    }else if (secretNumber < gues)
    {
      cout << "swqw";
    }
    
    
  }while (secretNumber != gues);
  {
    cout<< "eqeqeq";
  }
  
}