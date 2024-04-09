#include <iostream>
#include <string>

int main () {
  std::cout << "Please enter a string without any white spaces." << std::endl;
  std::string word {};
  std::string print {};
  std::cin >> word;

  for(int i = 0; i < word.length(); i++) {
    
    std::cout << word[i] << std::endl;
  }   

  return 0;
};