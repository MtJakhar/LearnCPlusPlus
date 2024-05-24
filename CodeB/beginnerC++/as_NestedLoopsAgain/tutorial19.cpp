#include <iostream>
#include <iomanip>

using namespace std;

// int main () {
//   int length;
//   cout << "length: ";
//   cin >> length;

//   char symbol;
//   cout << "Symbol: ";
//   cin >> symbol;

//   // for(int i = 1; i <= length; i++) {
//   //   for(int j = 1; j <= i; j++) {
//   //     cout << setw(3) << symbol;
//   //   }
//   //   cout << endl;
//   // }

//   for(int i = length; i >= 1; i--) {
//     for(int j = 1; j <= i; j++) {
//       cout << setw(3) << symbol;
//     }
//     cout << endl;
//   }

  
// }

int main () {
  int length;
  cout << "length: ";
  cin >> length;

  char symbol;
  cout << "Symbol";
  cin >> symbol;

  for(int i = length; i >= 1; i--) {
    for(int j = 1; j <= i; j++) {
      cout << setw(3) << symbol;
    }
    cout << endl;
  }
}