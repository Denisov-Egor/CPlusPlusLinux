#include <iostream>
#include <regex>
#include <string>

int main()
{
  std::string text;

  std::getline(std::cin, text);

  std::regex pattern(R"(\b[a-zA-Z]+\b)");

  std::smatch match;

  if (regex_search(text, match, pattern))
  {
    std::cout << "Совпадение найдено: " << match.str() << '\n';
  }else
  {
    std::cout << "Совпадние не найдено\n";
  }  
}