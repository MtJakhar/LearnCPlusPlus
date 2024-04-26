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

void menuDisplay ();
char getChar();
void handlePrint(const std::vector <int> &v);
void handleAdd(std::vector <int> &v);
void handleMean(const std::vector <int> &v);
void handleSmallest(const std::vector <int> &v);
void handleLargest(const std::vector <int> &v);
void handleQuit(bool &b);

int main () {
  char userInputChar {};
  int userInputNumber {};
  bool runProgram {true};

  std::vector <int> numbers {};

  while(runProgram) {    
    menuDisplay();
    char selection = getChar();

    switch(selection){
      case 'P':
      handlePrint(numbers);
      break;

      case 'A':
      handleAdd(numbers);
      break;

      case 'M':
      handleMean(numbers);
      break;

      case 'S':
      handleSmallest(numbers);
      break;

      case 'L':
      handleLargest(numbers);
      break;

      case 'Q':
      handleQuit(runProgram);
      break;
      
      default: std::cout << "Unknown selection, please try again\n" << std::endl;
    }
  }

  return 0;
}

void menuDisplay() {
  std::cout << "--------------------" << std::endl;
  std::cout << "P - Print numbers" << std::endl;
  std::cout << "A - Add a number" << std::endl;
  std::cout << "M - Display mean of numbers" << std::endl;
  std::cout << "S - Display the smallest number" << std::endl;
  std::cout << "L - Display the largest number" << std::endl;
  std::cout << "Q - Quit" << std::endl;
  std::cout << "--------------------" << std::endl;
}

char getChar() {
  char userInputChar {};
  std::cout << "Enter Your Selection.\n";
  std::cin >> userInputChar;
  return toupper(userInputChar);
}

void handlePrint(const std::vector <int> &v){
    if(v.size() == 0) {
      std::cout << "[]- the list is empty\n" << std::endl;
    } else {
      std::cout << "[ ";
      for(auto element: v) {
        std::cout << element << " ";
      }
      std::cout << "]\n" << std::endl;
    }
};
void handleAdd(std::vector <int> &v) {
    int userInputNumber {};
    std::cout << "Please enter a integer.\n";
    std::cin >> userInputNumber;
    v.push_back(userInputNumber);
    std::cout << userInputNumber << " added\n" << std::endl;
};

void handleMean(const std::vector <int> &v) {
  if(v.size() == 0) {
    std::cout << "Unable to calculate the mean - no data\n" << std::endl;
  } else {
    float average {};
    int sum {0};
    for(auto element: v) {
      sum += element;
    }
    average = sum/v.size();
    
    std::cout<< average << "\n" << std::endl;
  }
};

void handleSmallest(const std::vector <int> &v) {
  if(v.size() == 0) {
    std::cout << "Unable to determine the smallest number - list is empty" << std::endl;
  } else {
    int smallest {};
    for(auto element : v) {
      if(!smallest || element < smallest) {
        smallest = element;
      }
    }
    std::cout << "The smallest number is " << smallest << "\n" << std::endl;
  }
};

void handleLargest(const std::vector <int> &v) {
  if(v.size() == 0) {
    std::cout << "Unable to determine the largest number - list is empty\n" << std::endl;
  } else {
    int largest {};
    for(auto element : v) {
      if(!largest || element > largest) {
        largest = element;
      }
    }
    std::cout << "The largest number is " << largest << "\n" << std::endl;
  }
};

void handleQuit(bool &b) {
  std::cout << "Goodbye\n" << std::endl;
  b = false;
};