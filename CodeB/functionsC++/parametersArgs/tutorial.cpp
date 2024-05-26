// #include <iostream>

// using namespace std;
// //default values must be at end with other default values.
// void introduceMe(string name, string city, int age=0);

// int main () {
//   string name, city;
//   int age;
//   cout << "name, city, age, enter in that order\n";
//   cin >> name >> city >> age;
//   introduceMe(name, city, age);
// }

// void introduceMe(string name, string city, int age) {
//   cout << "My name is " << name << endl;
//   cout << "My city is " << city << endl;
//   if(age !=0) {
//     cout << "My age is " << age << endl;
//   }
// }

#include <iostream>

using namespace std;

void introduceMe(string name, string city, int age = 0);

int main () {
  string name, city;
  int age;
  cout << "name, city, age, enter in that order\n";
  cin >> name >> city >> age;
  introduceMe(name, city, age);

}

void introduceMe(string name, string city, int age) {
  cout << "MY name is " << name << endl;
  cout << "My city is " << city << endl;
  if(age != 0) {
    cout << "My age is " << age << endl;
  }
}