#include <iostream> 
int main () {
  char vowels[] {'a', 'b', 'c', 'd', 'e'};
  std::cout << "\nfirst vowel is: " << vowels[0] << std::endl;
  std::cout << "the last vowel is: " << vowels[4] << std::endl;

  return 0;
}
//always initialize your arrays {} to get rid of junk data.