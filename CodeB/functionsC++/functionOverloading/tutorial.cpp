// #include <iostream>

// using namespace std;

// //function overloading is a feature that allows you to define multiple functions with the same name but different parameters and or return types.
// int sum(int a, int b);
// double sum(double a , double b);
// float sum(float a, float b, float c);

// int main () {
//   cout << sum(4 ,3) << endl;
//   cout << sum(4.4 ,3.3) << endl;
//   cout << sum(4.4 ,3.3, 2.2) << endl;
// }

// int sum(int a, int b) {
//   return  a + b;
// }

// double sum(double a, double b) {
//   return a + b;
// }

// float sum(float a, float b, float c) {
//   return a + b + c;
// }

#include <iostream>

using namespace std;

int sum(int a, int b);
double sum(double a, double b);
float sum(float a, float b, float c);

int main () {
  cout << sum(4, 3) << endl;
  cout << sum(4.4, 3.3) << endl;
  cout << sum(4.4, 3.3, 2.2) << endl;
}

int sum (int a, int b) {
  return a + b;
}

double sum (double a, double b) {
  return a + b;
}

float sum (float a, float b, float c) {
  return a + b + c;
}
