// #include <iostream>
// using namespace std;

// int main () {
//   //do while loop
//   int userPin{1234}, pin, errorCounter{0};

//   do {
//     cout << "PIN: ";
//     cin >> pin;
//     if(pin != userPin) {
//       errorCounter++;
//     }
//   } while (pin != userPin && errorCounter < 3);
//   if(errorCounter < 3) {
//     cout << "Loading...";
//   } else {
//     cout << "Blocked...";
//   }
// }
#include <iostream>
using namespace std;
int main () {
  int userPin{1234}, pin, errorCounter{0};

  do{
    cout << "Pin: ";
    cin >> pin;
    if(pin != userPin) {
      errorCounter++;
    }
  } while (pin != userPin && errorCounter < 3);
  if(errorCounter < 3) {
    cout << "Loading...";
  } else {
    cout << "Blocked...";
  }
}