#include <iostream>

class IntArray{
private:
  int* data;
  int size;
public:
  IntArray(int size) : data(new int[size]{}), size(size) {}

  ~IntArray(){
    delete [] data;
  }

  IntArray(const IntArray &other) 
          : data(new int[other.size]), size(other.size){
    for (int i = 0; i < size; i++){
      data[i] = other.data[i];
    }
  }

  IntArray &operator=(const IntArray &other) {
    if (this == &other) {
      return *this;
    }

    int *newData = new int[other.size];

    for (int i = 0; i < other.size; ++i) {
      newData[i] = other.data[i];
    }

    delete[] data;

    data = newData;
    size = other.size;

    return *this;
  }
  
  void set(int index, int value) {
    if (index < 0 || index >= size) {
      return;
    }

    data[index] = value;
  }

  int get(int index) const {
    if (index < 0 || index >= size){
      return 0;
    }

    return data[index];
  }

  void print() const{
    for (int i = 0; i < size; i++){
      std::cout << data[i] << ' ';
    }

    std::cout << '\n';
  }
};

void runApplication() {
  std::cout << "=== Создание первого массива ===\n";

  IntArray first(3);
  first.set(0, 10);
  first.set(1, 20);
  first.set(2, 30);

  std::cout << "First: ";
  first.print();

  std::cout << "\n=== Проверка Copy Constructor ===\n";

  IntArray second(first);
  second.set(0, 999);

  std::cout << "First: ";
  first.print();

  std::cout << "Second: ";
  second.print();

  std::cout << "\n=== Проверка Copy Assignment ===\n";

  IntArray third(2);
  third.set(0, 100);
  third.set(1, 200);

  third = first;
  third.set(1, 888);

  std::cout << "First: ";
  first.print();

  std::cout << "Second: ";
  second.print();

  std::cout << "Third: ";
  third.print();

  std::cout << "\n=== Проверка самоприсваивания ===\n";

  first = first;

  std::cout << "First: ";
  first.print();
}

int main(){
  runApplication();

  return 0;
}