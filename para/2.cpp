#include <iostream>

class Animal
{
public:
  virtual void MakeSound() const
  {
    std::cout << "Животное издает звук\n";
  }

  virtual ~Animal() = default;
};

class Dog : public Animal
{
public:
  void MakeSound() const override
  {
    std::cout << "ГАВ\n";
  }
};

class Cat : public Animal
{
  public:
  void MakeSound() const override
  {
    std::cout << "МЯУ\n";
  }
};

void MakeSound(Animal& animal)
{
  animal.MakeSound();
}

int main()
{
  Dog dog;
  Dog dog2;
  Cat cat;
  
  Animal* animal[3] = {&dog, &cat, &dog2};

  for (int i = 0; i < 3; i++)
  {
    MakeSound(*animal[i]);
  }
  
}