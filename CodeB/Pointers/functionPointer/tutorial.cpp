#include <iostream>

using namespace std;

/*
pointers- variable that stores the address of another variable
function pointers- stores the address of a function

syntax of function pointers
returnType(*NameofFunctionPointer)(parameters dataTypes);

purpose- function pointer in order to pass a function as a parameter to another function. or more specifically its result.
*/

int add(int a, int b) {
  return a + b;
}

int getNumber() {
  return 5;
}

int main () {
  // // this will show the address of the function
  // cout << getNumber;
  // // this will execute the function
  // cout << getNumber();

  int(*functionPointer)() = getNumber;
  cout << functionPointer();

  int(*functionPointer2)(int, int) = add;
  cout << add(2,3) << endl; // 5
  cout << functionPointer2(4,5) <<endl; // 9

}
