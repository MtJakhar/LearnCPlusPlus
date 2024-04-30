#include <iostream>

using namespace std;

/*
abstraction - means show and display important information while hiding complex and unimportant details

abstract class - is a class with at least one pure virtual function
*/

class SmartPhone {
  public:
  //to create a virtual function you must use virtual keyword and set the function to zero.
  virtual void TakeASelfie() = 0;
  //we cant make instances of abstract classes, but we can make pointers to them.
  virtual void MakeACall() = 0;
  //these virtual function are the example of abstraction, simplifying the code so that 
};

class Android:public SmartPhone {
  //if we were to not make a takeaselfie function than we wont be able to create this class at all.
  public:
  void TakeASelfie(){
    cout << "Android selfie\n";
  }
  void MakeACall(){
    cout << "Android Call\n";
  }

};

class IPhone: public SmartPhone {
  public:
  void TakeASelfie() {
    cout << "Iphone selfie\n";
  }

  void MakeACall(){
    cout << "Iphone Call\n";
  }
};

int main() {
  SmartPhone* phone1 = new Android();
  SmartPhone* phone2 = new IPhone();
  phone1->TakeASelfie();
  phone2->TakeASelfie();
  phone1->MakeACall();
  phone2->MakeACall();

}