#include <iostream>
#include <string>

class Device{
private:
  std::string name;

protected:
  int serialNumber;
  bool isPowered;

public:
  Device(const std::string& name, int serialNumber, bool isPowered)
        : name(name), serialNumber(serialNumber), isPowered(isPowered)
  {}

  void turnOn(){
    isPowered = true;
  }

  void turnOff(){
    isPowered = false;
  }

  void displayName() const {
    std::cout << "Имя устройства: " 
              << name 
              << '\n';
  }

  void displayPowerStatus() const {
    std::cout << "Состояние питания: "
              << (isPowered ? "Включено" : "Выключено") 
              << '\n';
  }
};

class Computer : private Device{
private:
  int ram;
  std::string processor;

public:
  Computer(const std::string& name, int serialNumber, bool isPowered,
          int ram, const std::string& processor)
          : Device(name, serialNumber, isPowered),
            ram(ram), processor(processor)
  {}

  void powerOn() {
    turnOn();
  }

  void powerOff() {
    turnOff();
  }

  void displayInfo() const{
    displayName();

    std::cout << "Серийный номер: " 
              << serialNumber 
              << '\n';

    std::cout << "Оперативная память: " 
              << ram 
              << " ГБ\n";

    std::cout << "Процессор: " 
              << processor 
              << '\n';

    displayPowerStatus();
  }

  void checkPower() const{
    if (isPowered) {
      std::cout << "Компьютер включен.\n";
    } else {
      std::cout << "Компьютер выключен.\n";
    }
  }
};

void runApplication() {
  Computer computer("Игровой ПК", 1001, false, 32, "Intel Core i7");

  std::cout << "=== Информация об устройстве ===\n";
  computer.displayInfo();

  std::cout << "\n=== Управление питанием ===\n";

  computer.powerOn();
  computer.checkPower();

  computer.powerOff();
  computer.checkPower();
}


int main(){
  runApplication();
  return 0;
}