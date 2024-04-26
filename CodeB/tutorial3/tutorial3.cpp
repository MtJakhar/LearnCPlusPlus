/*

*/
#include <iostream>
using namespace std;

int main () {
  //below are casting operators  both lines do the same thing
  // cout << (int)'a' << endl;
  // cout << int('a') << endl;
  // cout << int('A') << endl;
  // cout << char(65) << endl;

  //you can create multiple variables at once if the are of same type.
  char c1, c2, c3, c4, c5;
  cout << "enter 5 letters\n";
  //you can enter multiple variables with binding.
  cin >> c1 >> c2 >> c3 >> c4 >> c5;
  cout << "ACSII message: " << int(c1) << " " << int(c2) << " " << int(c3) << " " << int(c4) << " " << int(c5) << endl;

  int i1, i2, i3, i4, i5;
  cout << "Enter ascii cipher of 5 integers\n";
  cin >> i1 >> i2 >> i3 >> i4 >> i5;
  cout << "Here is your message: " << char(i1) << char(i2) << char(i3) << char(i4) << char(i5); 

}