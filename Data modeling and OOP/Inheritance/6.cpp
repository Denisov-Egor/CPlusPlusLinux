#include <iostream>
#include <string>

class Device{
private:
  std::string name;

protected:
  int serialNumber;

public:
  bool isPowered;

  Device(const std::string& name, int serialNumber, bool isPowered)
        : name(name), serialNumber(serialNumber), isPowered(isPowered)
  {}

  void turnOn(){
    isPowered = true;
  }

  void turnOff(){
    isPowered = false;
  }

  void displayInfo() const {
    std::cout << "Название устройства: " 
              << name 
              << '\n';

    std::cout << "Серийный номер: " 
              << serialNumber 
              << '\n';

    std::cout << "Состояние питания: "
              << (isPowered ? "Включено" : "Выключено") 
              << '\n';
  }
};

class Computer : public Device{
private:
  std::string processor;

public:
   Computer(const std::string &name, int serialNumber, bool isPowered,
           const std::string &processor)
          : Device(name, serialNumber, isPowered), 
          processor(processor) 
  {}

  void showInfo() const {
    std::cout << "\n=== Компьютер ===\n";
    displayInfo();
    std::cout << "Процессор: " 
              << processor 
              << '\n';
  }
};

class Laptop : protected Device {
private:
  int batteryCapacity;

public:
  Laptop(const std::string &name, int serialNumber, bool isPowered,
         int batteryCapacity)
        : Device(name, serialNumber, isPowered),
          batteryCapacity(batteryCapacity) 
  {}

  void powerOn() {
    turnOn();
  }

  void powerOff() {
    turnOff();
  }

  void showInfo() const {
    std::cout << "\n=== Ноутбук ===\n";
    displayInfo();
    std::cout << "Ёмкость аккумулятора: "
              << batteryCapacity 
              << " мА·ч\n";
  }
};

class Smartphone : private Device {
private:
  int cameraResolution;

public:
  Smartphone(const std::string &name, int serialNumber, bool isPowered,
             int cameraResolution)
            : Device(name, serialNumber, isPowered),
              cameraResolution(cameraResolution) 
  {}

  void powerOn() {
    turnOn();
  }

  void powerOff() {
    turnOff();
  }

  void showInfo() const {
    std::cout << "\n=== Смартфон ===\n";
    displayInfo();
    std::cout << "Разрешение камеры: "
              << cameraResolution 
              << " Мп\n";
  }
};

void runApplication() {
  Computer computer("Игровой ПК", 1001, false, "Intel Core i7");
  Laptop laptop("Рабочий ноутбук", 2001, false, 5000);
  Smartphone smartphone("Смартфон", 3001, false, 108);

  computer.showInfo();
  laptop.showInfo();
  smartphone.showInfo();

  std::cout << "\n=== Управление питанием ===\n";

  computer.turnOn();
  laptop.powerOn();
  smartphone.powerOn();

  std::cout << "Компьютер: "
            << (computer.isPowered ? "Включен" : "Выключен") 
            << '\n';

  laptop.showInfo();
  smartphone.showInfo();

  computer.turnOff();
  laptop.powerOff();
  smartphone.powerOff();
}

int main(){
  runApplication();
  return 0;

}