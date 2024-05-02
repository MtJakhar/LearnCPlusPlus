#include <iostream>

using namespace std;

int main () {
  int n = 5;
  //& -gives the memory address of a variable
  cout << &n << endl;
  //returns 0x16afbb16c a hexidecimal value;

  //pointer syntax
  // dataType *VariableName || dataType* VariableName
  int *pointer = &n;
  cout << pointer << endl;
  //inorder to get the value which the memory address contains you must use the following syntax
  cout << *pointer << endl;
  //this is called pointer dereferencing

  //you can change the value of that address through pointer dereferening
  *pointer = 10;
  cout<< "pointer: " << *pointer << endl;
  cout<< "n: " << n << endl;

  //you cant assign a value to a pointer if a pointer does not have an address it is pointing to, by default pointers do not point to anything.
  int v;
  int* ptr=&v;
  *ptr = 7;
  cout << "v=" << v << endl;

  /*
  notes:
  you cant use variables to store memory addresses.  
  int variable = &n;

  the pointer must be of the same dataType as the Address value it is pointing to.


  */
}