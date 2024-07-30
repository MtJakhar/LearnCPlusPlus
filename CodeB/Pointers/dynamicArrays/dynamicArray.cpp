#include <iostream>

using namespace std;

int main () {

  //create a dynamic array and ask user for its size.

  int size;

  //ask user for size
  cout << "What is the size of your array? ";
  cin >> size;
  //create dynamicarray based on size
  int* dynamicArray = new int[size];

  //allow user to input elements of array
  for(int i = 0;i < size; i++) {
    cout << "Enter element " << i + 1 << ": ";
    cin >> *(dynamicArray + i);
  }

  //then output the elements of array
  for(int i = 0; i < size; i++) {
    cout << *(dynamicArray + i) << " ";
  }
  //then delete dynamic array

  delete[] dynamicArray;
  dynamicArray = NULL;

  return 0;
}