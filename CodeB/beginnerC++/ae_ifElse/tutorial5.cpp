// #include <iostream>
// using namespace std;

// int main() {
//   //enter sides of tri a,b,c
//   //program should write out whether that tri is quil,isos,scal.
//   float a, b, c;
//   cout << "a, b, c" << endl;
//   cin >> a >> b >> c;
  
//   if(a==b && b == c) {
//     cout << "equal" << endl;
//   }  else {
//     if (a!= b && a!=c && b != c ) {
//     cout << "scalene" << endl;
//     } else {
//       cout << "iso" << endl;
//     }
//   }
// }

#include <iostream>

using namespace std;

int main () {
  float a, b, c;
  cout << "enter three numbers, which will be sides of triangle \n";
  cin >> a >> b >> c;

  if(a==b && b==c) {
    cout << "equal triangle" << endl;
  } else {
    if(!a==b && !b==c) {
      cout << "scalene triangle" << endl;
    } else {
      cout << "iso triangle" << endl;
    }
  }
}