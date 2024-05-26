// #include <iostream>

// using namespace std;

// int main () {
//   //swapping variables
//   int a = 20;
//   int b = 10;
//   int temp;

//   // temp = a;
//   // a = b;
//   // b = a;

//   a = a + b;
//   b = a - b;
//   a = a - b;

//   cout << " a = " << a << endl;
//   cout << "b = " << b;
// }

#include <iostream>

using namespace std;

int main () {

  int a = 20;
  int b = 11;
  int temp;

  temp = b;
  b = a;
  a = b;

  a = a + b;
  b = a - b;
  a = a - b;
}

