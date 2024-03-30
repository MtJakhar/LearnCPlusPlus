#include <iostream> 

int main () {
  std::cout << "enter a number of cents" << std::endl;

  int dollar {0};
  int quarters {0};
  int dimes {0};
  int nickels {0};
  int pennies {0};
  int cents;

  std::cin >> cents;  
  
  if(cents / 100) {
    dollar += cents / 100; 
    cents = cents % 100;
  }
  if(cents / 25) {
    quarters += cents/25;
    cents = cents % 25;
  }
  if(cents / 10) {
    dimes += cents / 10;
    cents = cents % 10;
  }
  if(cents / 5) {
    nickels += cents / 5;
    cents = cents % 5;
  }
  if(cents / 1) {
    pennies += cents / 1;
    cents = cents % 1;
  }

  std::cout << "dollars: " << dollar << std::endl;
  std::cout << "quarters: " << quarters << std::endl;
  std::cout << "dimes: " << dimes << std::endl;
  std::cout << "nickels: " << nickels << std::endl;
  std::cout << "pennies: " << pennies << std::endl;

  return 0;

}