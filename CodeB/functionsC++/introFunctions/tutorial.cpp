#include <iostream>
using namespace std;

//functions are implemented in the order they are called
//it is best to create a declaration statement also known as prototypes.
//then define the definition statement/function

//this is be the declaration 
//right click the function to find definition, or press f12
void functionName();

int main () {
  functionName();
  cout << "Hello from main()\n";
}


//this is the definition
void functionName() {
  cout<< "Hello from functionName()" << endl;
}