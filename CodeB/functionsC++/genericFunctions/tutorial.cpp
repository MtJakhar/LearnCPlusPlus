// #include <iostream>

// using namespace std;

// //template allows you to create functions that can use any datatype
// template<typename T>

// void Swap(T& a, T& b) {
//   //the reference operator in this case points to the memory location of T and changes it directly in the memory instead of duplicating the value in another address. 
//   T temp = a;
//   a = b;
//   b = temp;
// }

// int main () {
//   int a = 5, b = 7;
//   cout << a << " - " << b << endl;
//   Swap(a,b);
//   cout << a << " - " << b << endl;

//   char c = 'c', d = 'd';
//   cout << c << " - " << d << endl;
//   Swap(c,d);
//   cout << c << " - " << d << endl;
// }

#include <iostream>

using namespace std;

template <typename T>

void Swap(T& a, T& b) {
  T temp = a;
  a = b;
  b = temp;
}

int main () {
  int a = 5, b = 7;
  cout << a <<  " - " << b << endl;
  Swap(a,b);
  cout << a << " - " << b << endl;
  
  char c ='c', d = 'd';
  cout << c << " - " << d << endl;
  swap(c,d);
  cout << c << " - " << d << endl;
}



