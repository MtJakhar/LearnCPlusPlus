#include <iostream>

using namespace std;
// arrays store elements in contigious memory ending in /0 at the end.
int main () {
  int size;
  cout << "size: ";
  cin >> size;

  // int myArray[size];
  //this new dynamic array is created at runtime
  int *myArray = new int[size];

  for(int i = 0; i < size; i++) {
    cout << "Array" << i << "]";
    cin >> myArray[i];
  }

  for(int i = 0; i <size; i++) {
    // cout << myArray[i] << " ";
    cout << *(myArray + 1) << " ";
  }

  delete[] myArray;
  //assign value null to array, so that it will not 
  myArray = NULL;
}

/* to create dynamic arrays
you have to use allocation, and deallocation
which are the key words, new and delete
*/