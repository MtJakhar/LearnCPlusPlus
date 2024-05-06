#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

/*
  inline functions - simple functions that are not going to be reused and are not named
  lambda functions are inline functions.
  lambda has access to all variables within its scope
*/

int main() {
  /*this is the syntax of a lambda
  [] are called the capture clause
  additional variables are stored in capture clause.
  of you want the variable to be static and not change with the variable that is passed to it, you just enter the variable as is - d
  If you want the variable to be dynamic and change in accordance to the variable it is referencing then pass the variable as a reference- &d
  () parameters 
  {} definition of lambda function
  */

//if not using lambdas
//  struct {
//   void operator() (int x) {
//     cout << x << endl;
//   }
//  }something;

  int d = 1000;

  vector <int> v {2,3,7,14,23};
  //   for_each(v.begin(), v.end(), something);
  //with lambda
  for_each(v.begin(), v.end(), [d](int x){cout << x << " my power level is over " << d << endl;});
  
}