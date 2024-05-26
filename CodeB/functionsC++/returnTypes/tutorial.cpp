// #include <iostream>

// using namespace std;

// bool isPrimeNumber(int number);

// int main () {
//   int number;
//   cout << "Number : ";
//   cin >> number;
//   bool isPrimeFlag = isPrimeNumber(number);

//   if(isPrimeFlag) {
//     cout << "Prime number" << endl;
//   } else {
//     cout << "Not Prime number" << endl;
//   }
// }

// bool isPrimeNumber(int number) {
//   for(int i = 2; i < number; i ++) {
//     if(number%i == 0) {
//       return false;
//     }
//   }
//   return true;
// };

#include <iostream>

using namespace std;

bool isPrimeNumber(int number);

int main() {
  int number;
  cout << "Number: ";
  cin >> number;
  bool isPrimeFlag = isPrimeNumber(number);

  if(isPrimeFlag) {
    cout << "Prime number" << endl;
  } else {
    cout << "Not Prime number" << endl;
  }
}

bool isPrimeFlag(int number) {
  for(int i = 2; i < number; i++) {
    if(number%i == 0) {
      return false;
    }
  }
  return true;
}


