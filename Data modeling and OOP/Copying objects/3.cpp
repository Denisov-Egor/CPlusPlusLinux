#include <iostream>
#include <string>

class AppConfig
{
private:
  std::string applicationName;
  int maxConnections;
  bool debugMode;

public:
  AppConfig(const std::string &applicationName, int maxConnections, bool debugMode)
      : applicationName(applicationName),
        maxConnections(maxConnections),
        debugMode(debugMode)
  {
  }

  AppConfig(const AppConfig &other)
      : applicationName(other.applicationName),
        maxConnections(other.maxConnections),
        debugMode(other.debugMode)
  {
  }

  AppConfig &operator=(const AppConfig &other)
  {
    if (this == &other)
    {
      return *this;
    }

    applicationName = other.applicationName;
    maxConnections = other.maxConnections;
    debugMode = other.debugMode;

    return *this;
  }

  void setApplicationName(const std::string &name)
  {
    applicationName = name;
  }

  void setMaxConnections(int connections)
  {
    maxConnections = connections;
  }

  void setDebugMode(bool enabled)
  {
    debugMode = enabled;
  }

  std::string getApplicationName() const
  {
    return applicationName;
  }

  int getMaxConnections() const
  {
    return maxConnections;
  }

  bool getDebugMode() const
  {
    return debugMode;
  }
};

void printConfig(const AppConfig &config)
{
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

void runApplication()
{
  AppConfig first("Terminal", 10, true);
  AppConfig second("Editor", 20, false);
  AppConfig third("TestRunner", 30, true);

  std::cout << "\n=== Исходные настройки ===\n";
  printConfig(first);
  printConfig(second);
  printConfig(third);

  first = second = third;

  std::cout << "\n=== Изменённые настройки ===\n";
  printConfig(first);
  printConfig(second);
  printConfig(third);

  second.setApplicationName("Changed");
  second.setMaxConnections(50);
  second.setDebugMode(false);

  std::cout << "\n=== После изменения второго объекта ===\n";
  printConfig(first);
  printConfig(second);
  printConfig(third);
}

int main()
{
  runApplication();
  return 0;
}