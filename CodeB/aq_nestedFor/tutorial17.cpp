#include <iostream>

using namespace std;

int main () {
  for(int i = 1; i <= 10; i++) {
    for(int i2 = 1; i2 <= 10; i2 ++) {
      cout << i << " * "  << i2 << " = " << i * i2 << endl;
    }
    cout << endl;
  }
}