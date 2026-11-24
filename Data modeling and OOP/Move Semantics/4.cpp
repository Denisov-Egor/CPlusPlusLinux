#include <iostream>
#include <utility>

class Buffer{
private:
  int* data;
  int size;
public:
  Buffer(int size)
        : data(new int[size]), size(size)
  {
    std::cout << "Вызван обычный конструктор\n";

    for (int i = 0; i < size; i++){
      data[i] = i + 1;
    }
  }

  Buffer(Buffer&& other)
        : data(other.data), size(other.size)
  {
    other.data = nullptr;
    other.size = 0;

    std::cout << "Вызван конструктор перемещения\n";
  }

  Buffer& operator=(Buffer&& other){
    if (this == &other)
    {
      return *this;
    }

    delete [] data;

    data = other.data;
    size = other.size;

    other.data = nullptr;
    other.size = 0;
   
    std::cout << "Вызван оператор перемещающего присваивания\n";

    return *this;
  }

  ~Buffer(){
    delete [] data;

    std::cout << "Деструктор вызван\n";
  }

   void print() const{
    if (data == nullptr) {
        std::cout << "Буфер пуст\n";
        return;
    }

    std::cout << "Содержимое буфера: ";
    
    for (int i = 0; i < size; ++i) {
        std::cout << data[i] << ' ';
    }
    
    std::cout << '\n';
  }
};

int main()
{
  std::cout << "=== Создание объектов ===\n";

  Buffer first(5);
  Buffer second(3);

  std::cout << "\n=== До перемещения ===\n";

  std::cout << "Первый объект:\n";
  first.print();

  std::cout << "Второй объект:\n";
  second.print();

  std::cout << "\n=== Перемещающее присваивание ===\n";

  second = std::move(first);

  std::cout << "\n=== После перемещения ===\n";

  std::cout << "Первый объект:\n";
  first.print();

  std::cout << "Второй объект:\n";
  second.print();

  std::cout << "\n=== Завершение программы ===\n";
}

