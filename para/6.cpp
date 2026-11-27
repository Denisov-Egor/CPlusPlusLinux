#include <iostream>
#include <regex>
#include <string>

int main()
{
  std::string s;
  std::smatch match;

  getline(std::cin, s);

  while (std::regex_search(s, match, std::regex("[a-z][A-Z]")))
  {
    std::cout << match.str() << ' ';

    s = match.suffix();
  }
}