#include <iostream>

using namespace std;
int main () {
  int scores [] {100, 95, 89};

  cout << scores << endl;
  //returns array's first element address

  cout << *scores << endl;
  // * operator you can get first element of that array

  int *scorePointer {scores};

  cout << scorePointer << endl;
  //returns address of 1st array

  cout << *scorePointer << endl;
  //* operator you get first element

  // if destructuring works on arrays then maybe subscripting works on pointers? yes.

  cout << scorePointer[0] << endl;
  //100

  cout << scorePointer[1] << endl;
  //95

  //you can do the same by changing the address by 1
  //this is called offset notation
  cout << *scorePointer << endl;
  //100
  cout << *(scorePointer + 1) << endl;
  //95
  cout << *(scorePointer + 2) << endl;
  //89
}