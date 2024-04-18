#include <iostream>

using namespace std;

//pointer functions return the value of a pointer rather than address

int *largestInt(int *ptr1, int *ptr2) {
  if(*ptr1 > *ptr2) {
    return ptr1;
  } else {
    return ptr2;
  }
}

//in pointer functions dont point to the local variables

int *dontDoTHis () {
  int size {};
  //....
  return &size;
}

int *orThis () {
  int size{};
  int *ptr{&size};
  //...
  return ptr;
}

int main () {
  int a{100};
  int b{200};

  int *largestPtr {nullptr};
  largestPtr = largestInt(&a, &b);
  cout << *largestPtr << endl;

  return 0;
}

