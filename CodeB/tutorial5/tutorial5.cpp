#include <iostream>
using namespace std;

int main() {
  //enter sides of tri a,b,c
  //program should write out whether that tri is quil,isos,scal.
  float a, b, c;
  cout << "a, b, c" << endl;
  cin >> a >> b >> c;
  
  if(a==b && b == c) {
    cout << "equal" << endl;
  }  else {
    if (a!= b && a!=c && b != c ) {
    cout << "scalene" << endl;
    } else {
      cout << "iso" << endl;
    }
  }
}