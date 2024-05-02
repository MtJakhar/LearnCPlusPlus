#include <iostream>

using namespace std;

/*
  void pointer- pointer that can hold an address of any datatype.

  limitation- You cant dereference a void pointer

*/

void printNumber (int *numberPointer) {
  cout << *numberPointer << endl;
}
void printLetter (char *charPtr) {
  cout << *charPtr << endl;
}
//void pointer use case
void print(void *ptr, char type) {
  switch(type) {
    // this syntax is dereferencing the type casted pointer, the first case si type casting the pointer as an int.
    case 'i': cout << *((int*)ptr) << endl;
    break;
    case 'c': cout << *((char*)ptr) << endl;
    break;
    case 'f': cout << *((float*)ptr) << endl;
    break;
    default: cout << "error";
    break;
  }
}

int main () {
  int number = 5;
  char letter = 'a';
  // printNumber(&number);
  // printLetter(&letter);
  print(&number, 'i');
  print(&letter, 'c');


}