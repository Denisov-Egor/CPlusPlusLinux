#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  vector<int> a;

  a.push_back(5); // добавление элементов
  a.push_back(6);
  a.push_back(0);

  cout << a.size() << endl; // размер вектора

  for (int i = 0; i < a.size(); i++)
  {
    cout << a[i]; 
  } // вывод вектора

  cout << endl;
  
  a.pop_back(); // удаление последнего эл

  for (int i = 0; i < a.size(); i++)
  {
    cout << a[i];
  }

  cout << endl;
  
  cout << a[1]; // вывод по эл

  cout << endl;

  cout << a.at(0); // вывод по эл

  cout << endl;

  // запись вектора
  int n;

  cin >> n;

  vector<int> b(n);

  for (int i = 0; i < b.size(); i++)
  {
    cin >> b[i];
  }

  for (int i = 0; i < b.size(); i++)
  {
    cout << b[i]; 
  }

  cout << endl;
  
  // более удобный способ вывода вектора

  vector<int> c = {1, 6, 87, 52};

  for (int x : c)
  {
    cout << x << ' ';
  }

  cout << endl;
  
  // проверка на пустоту

  vector<int> d = {10, 58, 98};

  if (!d.empty())
  {
    cout << "Vector не пуст";
  }

  cout << endl;

  // очишение вектора

  d.clear();

  if (d.empty())
  {
    cout << "Vector пуст";
  }

  vector<int> numbers = {10, 20, 30};

  cout << numbers.front() << endl;// 1 эл

  cout << numbers.back() << endl;// последний эл

  vector<int> e = {1, 2, 3};

  e.resize(5); // изменить кол-во эл

  for (int z : e)
  {
    cout << z << ' ' << endl;
  }

  vector<int> f = {14, 65};
  
  f.resize(4, 100); // изменить кол-во эл и указать какое число

  for (int q : f)
  {
    cout << q << ' ';
  }
}