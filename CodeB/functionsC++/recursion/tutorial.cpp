#include <iostream>

using namespace std;

int recursive_sum(int m, int n) {
  if(m == n) {
    return m;
  }
  return m + recursive_sum(m + 1, n);
}

int recursionSum(int m, int n) {
  if(m == n) {
    return m;
  }
  return m + recursionSum(m + 1, n);
}

//sum number between m-n
int main () {
  int m = 2, n = 4;
  // int sum = 0;
  
  // for(int i = m; i <= n; i++) {
  //   sum += i;
  // }
  cout << "sum = " << recursive_sum(m,n); 
}

