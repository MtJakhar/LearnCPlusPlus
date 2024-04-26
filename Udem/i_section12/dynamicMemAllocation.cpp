#include <iostream>
#include <string>
#include <vector>

using namespace std;

// int main () {
//   //note that you are not pointing to another variable you are pointing to a unique address you have created with new. If you lose this address, you the way to get to that storage and then you have a memory leak.
//   int *intPtr {nullptr};

//   //storage allocation with new.
//   intPtr = new int;

//   cout << intPtr << endl;
//   //points to address 0x15ae06810

//   cout << *intPtr << endl;
//   //value is 0; should be garbage data?!

//   *intPtr = 100;
  
//   cout << *intPtr << endl;
//   //value is 100 now;
// }

// using delete
int main () {
  int *intPtr {nullptr};
  intPtr = new int;

  delete intPtr;
}

int main () {
  int *arrayPointer {nullptr};
  int size {};

  cout << "How big do you want the array? ";
  cin >> size;

  arrayPointer = new int[size];

  delete [] arrayPointer;
}