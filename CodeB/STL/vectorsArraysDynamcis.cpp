#include <iostream>
#include <vector>

using namespace std;
/*
  static arrays- 
    -stores elements in subsequent memory
    -holds same type of data
    -array has a fixed sized

  dynamic arrays
    -size is not constant and can be changed while the program is running
    -to become dynamic it must create a new array, and delete the old array, this requires a lot of processing time and memory
  vectors
    -vector are stored in contiguous memory, unlike the list (linked-list)
    -stl vector can resize itself
    -has many different methods
*/

int main () {
  vector<int> numbers;
  numbers.push_back(0);

  for(int i = 1; i <= 10; i++) {
    numbers.push_back(i);
  }

  for(int number : numbers) {
    cout << number << endl;
  }

  //iterators - are special function that point to areas within your vectors
  // for(auto it=numbers.begin(); it != numbers.end(); it++) {
  //   //cout << it <<endl;
  //   cout << *it << endl;
  //   cout << &it << endl;
  //   cout << &(*it) << endl;
  // }

  //you can use artimatic operators on vectors
  auto it = numbers.begin();
  cout << *(it + 5);

  /*
    constant iterators
    .cbegin(), .cend() - prevents changing data in vectors

    methods to use on vectors
    Initialization:
    std::vector<T> vec; - Creates an empty vector of type T.
    std::vector<T> vec(size); - Creates a vector of size size, initialized with default values of type T.
    std::vector<T> vec(size, value); - Creates a vector of size size, initialized with copies of value.
    Adding Elements:
    vec.push_back(value); - Adds an element to the end of the vector.
    vec.insert(position, value); - Inserts an element at a specified position.
    Accessing Elements:
    vec[index]; - Accesses the element at index index.
    vec.at(index); - Accesses the element at index index with bounds checking.
    vec.front(); - Accesses the first element.
    vec.back(); - Accesses the last element.
    Iterating:
    Using iterators (begin(), end(), rbegin(), rend()) to iterate through the vector.
    Size and Capacity:
    vec.size(); - Returns the number of elements in the vector.
    vec.capacity(); - Returns the number of elements that the vector can hold without reallocation.
    vec.resize(newSize); - Resizes the vector. If newSize is greater than the current size, new elements are default-initialized.
    Modifying Elements:
    vec[index] = value; - Modifies the element at index index.
    vec.erase(position); - Removes the element at a specified position.
    vec.clear(); - Removes all elements from the vector.
    Miscellaneous:
    vec.empty(); - Checks if the vector is empty.
    vec.swap(otherVec); - Swaps the contents of two vectors efficiently.

  */




}