#include <iostream>

using namespace std;

int factorialRecursion(int);

int main() {
  int userNum;
  cout << "Enter an integer" << endl;
  cin >> userNum;

  cout << factorialRecursion(userNum) << endl;

  return 0;
}

int factorialRecursion(int num) {
  if(num == 0) {
    return 1;
  }
  if(num == 1) {
    return num;
  }

  return num * factorialRecursion(num - 1);
}