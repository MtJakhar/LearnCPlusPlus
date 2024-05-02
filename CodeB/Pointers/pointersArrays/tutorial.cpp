#include <iostream>

using namespace std;
/*
  how to use pointer with arrays
*/

int main () {
  int luckyNumbers[5] = { 2,3,5,7,9 };
  //this will return the memory address of the first element within the array
  cout << luckyNumbers << endl;//0x16d4bf150
  cout << &luckyNumbers[0] << endl;//0x16d4bf150
  cout << luckyNumbers[0] << endl;//2
  cout << luckyNumbers[2] << endl;//5

  cout << *(luckyNumbers+2) << endl;//5

  for(int i = 0; i <=4; i++) {
    cout << "Number: ";
    cin >> luckyNumbers[i];
  }

  for(int i = 0; i <=4; i++) {
    cout << *(luckyNumbers + i) << " ";
  }

}