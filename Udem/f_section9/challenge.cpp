#include <iostream>
#include <vector>

/*
P - Print numbers
A - Add a number 
S - Display mean of the number
L - Display the largest number
Q - Quit

if illegal choice made you should display, "Unknown selection, please try again"

if user enters P or p, print numbers

if list empty, display - []- the list is empty

if list no empty display example - [ 1 2 3 4 5 ]

if user enters A or a, prompt user to add integer then display it was added "5 added"

if user enters M or m, get mean or average of list, display mean, if empty display  "Unable to calculate the mean - no data".

if enter s display smallest element in list, "The smallest number is 1", if empty "unable to determine the smallest number - list is empty"

if enter l display largest element in list, "The largest number is 1", if empty "Unable to determine the largest number - list is empty"

if the users enters q , display "Goodbye" and program should terminate
*/

int main () {
  char userInputChar {};
  int userInputNumber {};
  bool runProgram {true};

  std::vector <int> numbers {};

  while(runProgram) {
    std::cout << "--------------------" << std::endl;
    std::cout << "P - Print numbers" << std::endl;
    std::cout << "A - Add a number" << std::endl;
    std::cout << "M - Display mean of numbers" << std::endl;
    std::cout << "S - Display the smallest number" << std::endl;
    std::cout << "L - Display the largest number" << std::endl;
    std::cout << "Q - Quit" << std::endl;
    std::cout << "--------------------" << std::endl;

    std::cin >> userInputChar;

    switch(userInputChar){
      case 'p':
      case 'P':
      if(numbers.size() == 0) {
        std::cout << "[]- the list is empty\n" << std::endl;
      } else {
        std::cout << "[ ";
        for(auto element: numbers) {
          std::cout << element << " ";
        }
        std::cout << "]\n" << std::endl;
      }
      break;

      case 'a':
      case 'A':
      std::cin >> userInputNumber;
      numbers.push_back(userInputNumber);
      std::cout << userInputNumber << " added\n" << std::endl;
      break;

      case 'm':
      case 'M':
      if(numbers.size() == 0) {
        std::cout << "Unable to calculate the mean - no data\n" << std::endl;
      } else {
        float average {};
        int sum {0};
        for(auto element: numbers) {
          sum += element;
        }
        average = sum/numbers.size();
        
        std::cout<< average << "\n" << std::endl;
      }
      break;

      case 's':
      case 'S':
      if(numbers.size() == 0) {
        std::cout << "Unable to determine the smallest number - list is empty" << std::endl;
      } else {
        int smallest {};
        for(auto element : numbers) {
          if(!smallest || element < smallest) {
            smallest = element;
          }
        }
        std::cout << "The smallest number is " << smallest << "\n" << std::endl;
      }
      break;

      case 'l':
      case 'L':
      if(numbers.size() == 0) {
        std::cout << "Unable to determine the largest number - list is empty\n" << std::endl;
      } else {
        int largest {};
        for(auto element : numbers) {
          if(!largest || element > largest) {
            largest = element;
          }
        }
        std::cout << "The largest number is " << largest << "\n" << std::endl;
      }
      break;

      case 'q':
      case 'Q':
      std::cout << "Goodbye\n" << std::endl;
      runProgram = false;
      break;
      
      default: std::cout << "Unknown selection, please try again\n" << std::endl;
    }


  }

  return 0;
}