// #include <iostream>
// /*
// operators 
// +,-,*,/,%
// */
// using namespace std;

// int main() {
//   cout << 5 + 2 << endl;
//   cout << 5.0 / 2.0 << endl;

//   // ++ --

//   int counter = 7;
//   counter++;
//   cout << counter << endl;
//   counter--;
//   cout << counter << endl;

//   int counter2 = 7; 
//   cout << counter2++ << endl; // 7 cause post-position
//   cout << ++counter2 << endl; // 8 cause pre-position

//   //relational
//   // <,>,<=,=>,==,!=
//   int a = 5, b = 5;
//   cout << (a > b);// returns 0 meaning false
//   cout << (a < b);// returns 0 meaning false
//   cout << (a != b);// returns 0 meaning false
//   cout << (a >= b);// returns 1 meaning true
//   cout << (a == b);// returns 1 meaning true

//   //unary operator
//   // , comma means also used every where like a comma

//   //logical operator
//   //&&, ||, !  and, or, Not

//   cout << (a== 5 || b ==5); // returns true
//   cout << !(a== 5 || b ==5); // returns false, cause of ! which returns opposite
//   cout << (a== 5 && b ==5);

//   // assignment operators
//   // =,+=,-=,*=,/=,%=
//   int x = 5;
//   x+= 7; //same
//   x = x + 7; //same
// }

#include <iostream>

using namespace std;

int main () {
  cout << 5 + 2 << endl;
  cout << 5.0 / 2.0 << endl;

  int counter = 7;
  counter++;
  cout << counter << endl;
  counter--;
  cout << counter << endl;

  int counter2 = 7;
  cout << counter2++ << endl; // 7 
  cout << ++counter2 << endl; //8

  int a = 5, b = 5;
  cout << (a > b); // returns 0 meaning false;
  cout << (a < b); // returns 0 meaning false;
  cout <<  (a != b); // returns 0
  cout << (a >= b); // returns 1 meaning true;
  cout << (a == b); //returns 1 meaning true;

  //, comma means "also" used like comma

  cout << (a == 5 || b == 5); // returns 1
  cout << !(a == 5 || b == 5); // returns 0
  cout << (a == 5 && b == 5); // 1

  int x = 5;
  x += 7;
  x = x + 7;
}