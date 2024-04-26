#include <iostream>
#include <string>

int main () {
  std::cout << "Please enter a string without any white spaces." << std::endl;
  std::string word {};
  std::string print {};
  std::cin >> word;

  //first create loop which targets current index of string
  for(int i = 0; i < word.length(); i++) {
    //to create spaces to make pyramid add number of spaces of equal currentIndex - the length of the word; 
    for(int currentSpaceCount = i; currentSpaceCount < word.length(); currentSpaceCount++) {
      print.push_back(' ');
    }
    //to add left side letters until it reaches currentIndex
    for(int leftSideIndex = 0; leftSideIndex < i; leftSideIndex++){
      print.push_back(word.at(leftSideIndex));
    }
    //to add right side letters in reverse start at currentIndex and print until after the first index has been printed
    for(int rightSideIndex = i; rightSideIndex >= 0; rightSideIndex--){
      print.push_back(word.at(rightSideIndex));
    }
    std::cout << print << std::endl;
    print.clear();
  }   

  return 0;
};