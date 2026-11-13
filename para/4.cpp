#include <iostream>
#include <string>

class TrackedObject
{
private:
  std::string name;
  int id;
  
public:
  TrackedObject(std::string name, int id) 
                : name(name), id(id)
  {
    std::cout << "Обект создан: " << this->name << ", ID: " << this->id << '\n';
  }

  ~TrackedObject()
  {
    std::cout << "Объект удален: " << name << ", ID: " << id << '\n';
  }

};

void process() 
{
  std::cout << "\n--- Начало process() ---\n";

  TrackedObject first("Process-A", 3);
  TrackedObject second("Process-B", 4);

  std::cout << "\n--- Конец process() ---\n";
}

int main()
{
  TrackedObject mainFirst("Main-A", 1);

  {
    TrackedObject blockFirst("Block-A", 2);
  }

  process();

  {
    TrackedObject blockFirst("Block-B", 5);
  }

  TrackedObject mainSecond("Main-B", 6);
}