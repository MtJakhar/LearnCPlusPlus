#include <iostream>
using namespace std;


/*
templates -allows you to create functions or classes which can take in various types
syntax:
template <typename name> 
function/class here

template class - 
*/
int addInt(int a, int b) {
  return a + b;
}

float addFloat(float a, float b) {
  return a + b;
}

// template <typename T>
// T add(T a, T b) {
//   return a + b;
// }

// template <typename T>
// T subtract(T a, T b) {
//   return a - b;
// }

template <typename T>
  class Calculator {
  public:
  T add(T a, T b) {
  return a + b;
  }

  T subtract(T a, T b) {
  return a - b;
  }
};

int main () {
  cout << addInt(5,7) << endl; //12
  cout << addInt(5.3,7.7) << endl; //12 but is incorrect cant take float
  cout << addInt(5.3,7.7) << endl; //13 this works
  //but writing multiple functions ito jest add different data types is ineffective. 
  cout << add(5,7) << endl; //this template can work with different types better than previous examples.
  cout << add(5.7,7.3) << endl;

  cout << subtract(5,7) << endl;
  cout << subtract(5.5,2.3) << endl;

  Calculator<int> intCalc;
  cout << intCalc.add(5,8) << endl;

}