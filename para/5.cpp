#include <iostream>
#include <regex>
#include <string>

int main(){
  std::string s;

  getline(std::cin, s);

  std::regex patern("A+B+C+");

  std::string res = std::regex_replace(s, patern, "QQQ");

  std::cout << res;
}