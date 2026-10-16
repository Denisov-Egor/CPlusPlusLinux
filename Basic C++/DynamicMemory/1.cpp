#include <iostream>

using namespace std;

int main()
{
  int* nubmber = new int;

  cin >> *nubmber;

  cout << *nubmber << endl;
  cout << nubmber << endl;

  *nubmber = 50;

  cout << *nubmber << endl;
  cout << nubmber << endl;

  cout << &(*nubmber);

  delete nubmber;
  nubmber = nullptr;

  if (nubmber == nullptr)
  {
    cout << "Pointer is nullptr.";
  }
  
}