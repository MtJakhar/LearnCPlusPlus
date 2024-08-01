#include <iostream>

using namespace std; 

/*
smart pointer - deallocate memory automatically
3 types
-unique
-shared
-weak
*/



// class MyClass {
//   public:

//   MyClass() {
//     cout << "constructor invoked";
//   }
//   ~MyClass() {
//     cout << "destructor invoked";
//   }
// };

//unique pointers
// unique_ptr<dataType>UniquePointerName = make_unique<dataType>(input);

int main () {
  //unique syntax
  unique_ptr<int>uniquePointer =  make_unique<int>(25);
  /*
  by using * you can dereference a unique pointer
  */
 cout << uniquePointer << endl;//address
 cout << *uniquePointer << endl;// value 25
 //unique pointer cant share address with other pointers

 //this wont work
 //unique_ptr<int>uniquePointer2 = uniquePointer;

 //this will work cause we are moving the pointer to another pointer
 unique_ptr<int>uniquePointer2 = move(uniquePointer);
 
 //first pointer is now empty;
 //  cout << *uniquePointer << endl;
 cout << *uniquePointer2 << endl;

 //unique pointer cant share addresses without pointers
}

// int main() {
//   {
//     //unique pointers get deallocated at the end of their scope
//     unique_ptr<MyClass>uniquePointer3 = make_unique<MyClass>();
//   }
// }

//SHARED POINTERS

//shared_ptr<dataType>Name = make_shared<dataType>();

// int main() {
//   shared_ptr<MyClass>sharedPointer = make_shared<MyClass>();
//   //use_count is a methods for shared pointers that keeps count of how references are being shared on the pointer
//   cout << "Shared cout" << sharedPointer.use_count() << endl;//count 1
//   {
//     shared_ptr<MyClass>sharedPointer2 = sharedPointer;
//     cout << sharedPointer.use_count() << endl; // count 2
//   }
//   cout << sharedPointer.use_count() << endl; //count 1
  
// }

//WEAK POINTERS
/*
  used to locate a specific object in memory
*/

//weak_ptr<dataType> Name;

int main() {
  weak_ptr<int> weakPointer;
  {
    shared_ptr<int> sharedPointer = make_shared<int>(25); // assigns 25 to the shared pointer location
    weakPointer = sharedPointer; //weakpointer is now pointing the the address of value 25
  }
  //now the weak pointer will deallocate the address
}
