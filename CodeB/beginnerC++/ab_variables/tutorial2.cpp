/*
variables are containers for a certain data type
every variable has a limit for each data type.
a variable can only have one data type.
you cant change a variables datatype
*/

/* 
rules of variables
-give your variables meaningful names
-only special char you can use is _
-variable names cant begin with numbers
*/

// #include <iostream>

// using namespace std;

// int main() {
//   // float annualSalary;

//   // cout << "what is your annual salary ";
//   // cin >> annualSalary;
//   // float monthlySalary = annualSalary/12;
//   // cout << "Your monthly salary is " << monthlySalary << endl;
//   // cout << "in 10 years you will earn " <<  annualSalary *10 << endl;
  
//   // char character = 'a';
//   //single quotes for char

//   /*
//     data types
//     int, char, double, float, string, bool
//   */

//   // int yearOfBirth = 1995;
//   // char gender = 'f';
//   // bool isOlderThan18  = true;
//   // float averageGrade = 4.5;

//   // cout<< "size of int is " << sizeof(int) << "bytes\n";
//   // cout << "int min value is " << INT_MIN << endl;
//   // //-1,-2,-3,....-2147483648
//   // cout << "int max value is " << INT_MAX << endl;
//   // //0,1,2,3,....2147483647

//   // //unsigned is another data type
//   // //unsigned int give you only positive numbers
//   // cout<< "size of unsigned int is " << sizeof(unsigned int) << "bytes";
//   // cout<< "UInt max value is " << UINT_MAX << endl;

//   // cout<< "size of char is " << sizeof(char) << "bytes\n";
//   // cout<< "size of bool is " << sizeof(bool) << "bytes\n";
//   // cout<< "size of float is " << sizeof(float) << "bytes\n";
//   // cout<< "size of double is " << sizeof(double) << "bytes\n";

//   //datatype overflow
//   //like a clock overflow makes the next number go back to the beginning
//   int intMax = INT_MAX;
//   cout << intMax << endl;
//   cout << intMax + 1;
// }

#include <iostream>

using namespace std;

int main () {
  float annualSalary;
  cout << "What is your annual salary ";
  cin >> annualSalary;
  float monthlySalary = annualSalary/12;
  cout << "Your monthly salary is " << monthlySalary << endl;
  cout << "in 10 years you will earn " << annualSalary * 10 << endl;
  
  char character = 'a';
  //single quotes for char

  /*
    data types 
    int, char, double, float, string, bool
  */
  
  int yearofBirth = 1992;
  char gender = 'm';
  bool isOlderThan18 = true;
  float averageGrade = 4.5;

  cout << "size of int is " << sizeof(int) << "bytes\n";
  cout << "int min value is " << INT_MIN << endl;
  //using INT_MIN is a native c++ command which tells you the lowest possible value of an int datatype

  cout << "int max value is " << INT_MAX << endl;


  //unsigned data type is a header for ints
  //unsigned shows only positive
  cout << "size of unsigned in is " << sizeof(unsigned int) << "bytes";
  cout << "unsigned INT max value from UNIT_MAX" << UINT_MAX << endl;

  cout << "size of char is " << sizeof(char) << "bytes\n";
  cout << "size of bool is " << sizeof(bool) << "bytes\n";
  cout << "size of float is " << sizeof(float) << "bytes\n";
  cout << "size of double is " << sizeof(double) << "bytes\n";

  //data type overflow
  //like clock overflow makes next number go back to the beginning
  int intMax = INT_MAX;
  cout << intMax << endl;
  cout << intMax + 1;
}