#include <iostream>
#include <string>

class Resource
{
private:
  std::string name;
  int id;
public:
  Resource(std::string name, int id)
          : name(name), id(id)
  {
    std::cout << "Resource created: " << name << '\n';
  }

  ~Resource()
  {
    std::cout << "Resource destroyed: " << name << '\n';
  }

  void display() const
  {
    std::cout << "Name: " << name << '\n';
    std::cout << "ID: " << id << '\n';
    std::cout << "-------------------\n";
  }
};

int main()
{
  Resource resource1("File", 1);
  Resource resource2("Database", 2);

  {
    Resource resource3("Cache", 3);
    resource3.display();
  }

  Resource resource4("Network", 4);

  resource1.display();
  resource2.display();
  resource4.display();

}