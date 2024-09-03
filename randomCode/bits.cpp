#include <iostream>
#include <cmath>

using namespace std;

int binaryToIntegerValue(const string &bits);

bool is16Bit(const string &bits);

int main () {
  string userInput;

  do {
    cout << "please enter a 16-bit binary integer"<< endl;
    cin >> userInput;
  } while (is16Bit(userInput) == false);

  cout << userInput << " converted to the integer: "<<  binaryToIntegerValue(userInput) << endl;

  return 0;
}

//This is the answer to question 9
int binaryToIntegerValue (const string &bits) {
  int binaryValueTotal = 0;

  //First loop through the string
  for(int i = 0; i < bits.size(); i++) {
    //determine the current element's binary position value
    int binaryPosition = bits.size() - 1 - i;

    //if current element is 1 then find it binary value and add it to the total 
    if(bits[i] == '1') {
      binaryValueTotal += pow(2,binaryPosition);
    } 
  }

  return binaryValueTotal;
}

//is 16Bit checks to see if the string the user has inputted is a 16 bit integer 
bool is16Bit (const string &bits) {
  if(bits.size() != 16) {
    return false;
  }

  for(int i = 0; i < bits.size(); i++) {
    if(bits[i] != '1' && bits[i] != '0'){ 
      return false;
    }
  }

  return true;
}