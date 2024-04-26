#include <iostream>
#include <vector>

int main () {
  // std::vector <char> vowels;
  // std::vector <char> vowels(5);
  std::vector <char> vowels {'a','e','i','o','u'};
  std::cout << vowels.at(0) << std::endl;

  std::vector <int> testScores {1,2,3};
  std::cout << testScores.at(0) << std::endl;
}