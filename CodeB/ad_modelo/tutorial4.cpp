#include <iostream>
using namespace std;

int main () {
  //user enters integer number
  //program write out if that number is even or odd

  int number;
  cout << "enter a number" << endl;
  cin >> number;

  if(number%2==0) {
    cout << "You have entered a even number" << endl;
  } else {
    cout << "You have entered a odd number" << endl;
  }
  cout << "thx, bye" << endl;
}