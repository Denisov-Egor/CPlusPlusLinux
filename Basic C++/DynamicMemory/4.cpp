#include <iostream>

using namespace std;

int main()
{
  int* ptr = nullptr;

  if (ptr == nullptr)
  {
    cout << "Указатель равен nullptr. Разыменование невозможно." << endl;
  }else 
  {
    cout << "Указатель действителен. Возможно разыменование." << endl;
  }

  ptr = new int(100);
  
  if (ptr == nullptr)
  {
    cout << "Указатель равен nullptr. Разыменование невозможно." << endl;
  }else 
  {
    cout << *ptr << endl;
  }
  
  *ptr = 200;

  cout << *ptr << endl;

  delete ptr;
  ptr = nullptr;

  if (ptr == nullptr)
  {
    cout << "Указатель равен nullptr. Разыменование невозможно." << endl;
  }else 
  {
    cout << "Указатель действителен. Возможно разыменование." << endl;
  }
}