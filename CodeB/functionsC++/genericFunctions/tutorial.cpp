#include <iostream>

using namespace std;

// Template function to swap two values
template<typename Type>
void swapFunction(Type& a, Type& b) {
    Type temp = a;
    a = b;
    b = temp;
}

int main() {
  int alpha = 1, beta = 2;
  cout << "alpha: " << alpha << " - " << "beta: " << beta << endl;
  swapFunction(alpha, beta);
  cout << "alpha: " << alpha << " - " << "beta: " << beta << endl;

  char c = 'c', d = 'd';
  cout << "c: " << c << "\n" << "d: " << d << endl;
  swapFunction(c, d);
  cout << "c: " << c << "\n" << "d: " << d << endl;

  return 0;
}

