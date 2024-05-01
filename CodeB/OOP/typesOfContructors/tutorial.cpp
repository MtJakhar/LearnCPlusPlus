#include <iostream>

using namespace std;
/*
  constructors
  -must have same name as class
  -do not have returnType
  -need to be placed in public access modifier
  -default constructor has not parameters
  -if constructor is not provided then c++ makes its own default constructor

*/

// class UserPub {
//   public: 
//   string FirstName;
//   string lastName;
//   int Age;
//   string Email;
// };

class User {
  private:
    string FirstName;
    string LastName;
    int Age;
    string Email;
  public:
  User(string firstName, string lastName, int age) {
    FirstName = firstName;
    LastName = lastName;
    Age = age;
    Email = "";
  }

  void getUserInfo() {
    cout << "first name : " << FirstName << endl;
    cout << "last name : " << LastName << endl;
    cout << "age : " << Age << endl;
    cout << "email : " << Email << endl;
  };
};
  


int main() {
  // UserPub user1;
  // //without constructors, this is a time consuming process
  // user1.FirstName = "Tav";
  // user1.lastName = "last";
  // user1.Age = 8;

  User user2("mike", "jordan",8);
  user2.getUserInfo();
}