#include <iostream>
#include <utility>

void processLvalue(int& value){
  std::cout << "Lvalue: " << value << '\n';
}

void processRvalue(int&& value){
  std::cout << "Rvalue: " << value << '\n';
}

int main(){
  int number = 10;

  // Обечная перменная Lvalue
  processLvalue(number);

  // литерал rvalue
  processRvalue(50);

  // ариф вычисление Rvalue
  processRvalue(number + 5);

  //std::move преобразует выражение в xvalue
  processRvalue(std::move(number));

  // перменная типа int&&
  int&& ref = 30;

  // имя ref является lvalue.
  processLvalue(ref);

  //явное преобразование ref в xvalue
  processRvalue(std::move(ref));

  // Ошибки компиляции:
  // processRvalue(number);
  // processLvalue(40);
  // processRvalue(ref);
}
