// #include <iostream>

// using namespace std;

// int main () {
//   int number, reversedNumber=0;
//   cout << "Enter Number : \n";
//   cin >> number;

//   while(number != 0) {
//     reversedNumber *= 10;
//     int numberToAdd = number % 10;
//     reversedNumber += numberToAdd;
//     number /= 10;
//   }

//   cout << "reversed: " << reversedNumber << endl;
// }
#include <iostream>
using namespace std;

int main () {
  int number , reversedNumber = 0;
  cout << "Enter Number: \n";
  cin >> number;

  while(number !=0 ) {
    reversedNumber *= 10;
    int numberToAdd = number % 10;
    reversedNumber += numberToAdd;
    number /= 10;
  }
  cout << "reversed: " << reversedNumber << endl;
}