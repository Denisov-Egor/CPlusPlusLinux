#include <iostream>
#include <string>

class AppConfig {
private:
  std::string applicationName;
  int maxConnections;
  bool debugMode;
public:
  AppConfig(std::string applicationName, int maxConnections,bool debugMode) 
          : applicationName(applicationName), 
          maxConnections(maxConnections), 
          debugMode(debugMode)
  {} 

  AppConfig(const AppConfig &other)
          : applicationName(other.applicationName), 
          maxConnections(other.maxConnections),
          debugMode(other.debugMode) 
  {}

  std::string getApplicationName() const{
    return applicationName;
  }

  int getMaxConnections() const{
    return maxConnections;
  }

  bool getDebugMode() const{
    return debugMode;
  }
  
  void setApplicationName(const std::string &name){
    applicationName = name;
  }

  void setMaxConnections(int connections){
    maxConnections = connections;
  }

  void setDebugMode(bool enabled){
    debugMode = enabled;
  }
};

void printConfig(const AppConfig &config){
  std::cout << "Название приложения: " 
            << config.getApplicationName() 
            << '\n';

  std::cout << "Максимум соеденений: "
            << config.getMaxConnections() 
            << '\n';

  std::cout << "Режим откладки: "
            << (config.getDebugMode() ? "Включен" : "Выключен")
            << '\n';
}

void runApplication()
{
  AppConfig original("Terminal", 10, true);
  AppConfig copy(original);

  std::cout << "=== Исходная конфигурация ===\n";
  printConfig(original);

  copy.setApplicationName("TestRunner");
  copy.setMaxConnections(25);
  copy.setDebugMode(false);

  std::cout << "\n=== Изменённая копия ===\n";
  printConfig(copy);

  std::cout << "\n=== Проверка оригинала ===\n";
  printConfig(original);
}

int main(){
  runApplication();

  return 0;
}