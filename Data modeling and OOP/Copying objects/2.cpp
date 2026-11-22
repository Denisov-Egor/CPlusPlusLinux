#include <iostream>
#include <string>

class AppConfig{
private: 
  std::string applicationName;
  int maxConnections;
  bool debugMode;
public:
  AppConfig(const std::string &applicationName, int maxConnections, bool debugMode)
          : applicationName(applicationName), 
            maxConnections(maxConnections),
            debugMode(debugMode)
  {}

  AppConfig(const AppConfig &other)
          : applicationName(other.applicationName),
            maxConnections(other.maxConnections),
            debugMode(other.debugMode)
  {}

  AppConfig &operator=(const AppConfig &other)
  {
    if (this == &other){
      return *this;
    }
    
    applicationName = other.applicationName;
    maxConnections = other.maxConnections;
    debugMode = other.debugMode;

    return *this;
  }

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

void printConfig(const AppConfig &config) {
  std::cout << "Название приложения: " 
            << config.getApplicationName()
            << '\n';
  std::cout << "Максимум соединений: " 
            << config.getMaxConnections() 
            << '\n';
  std::cout << "Режим отладки: "
            << (config.getDebugMode() ? "Включён" : "Выключен") 
            << '\n';
}

void runApplication() {
  AppConfig production("Production", 100, true);
  AppConfig testing("Testing", 10, false);
  AppConfig development("Development", 25, true);

  std::cout << "=== Исходные настройки ===\n";
  printConfig(production);
  printConfig(testing);
  printConfig(development);

  testing = production;

  std::cout << "\n=== После копирования ===\n";
  printConfig(testing);

  testing.setApplicationName("TestRunner");
  testing.setMaxConnections(50);
  testing.setDebugMode(false);

  std::cout << "\n=== Проверка независимости ===\n";
  printConfig(production);
  printConfig(testing);

  development = development;

  std::cout << "\n=== Проверка самоприсваивания ===\n";
  printConfig(development);
}

int main(){
  runApplication();
  return 0;
}