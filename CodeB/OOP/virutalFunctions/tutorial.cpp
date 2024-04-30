#include <iostream>

using namespace std;
/*
  virtual function - is a function that is defined in the parent calss, but is also redefined in a child class.

  its purpose is to give you the ability of runtime polymorphism.

  when executing the function, the complier prioritizes the function of the derived/child class if that function is different that the parent class. Otherwise it will implement the parent version of the function.
*/

class Instrument {
  public:
  //normal way makes it so that it is not make the derived/child class the priority
  // void MakeSound() {
  //   cout << "Instrument is playing...\n";
  // }

  //By adding the virtual datatype we make it a virtual function
  // virtual void MakeSound() {
  //   cout << "Instrument is playing...\n";
  // }

  //Pure virtual functions- force derived class to have their own version of MakeSound, and the parent class will not have its own implementation
  //if a class has at least one Pure virtual function in it, it is called a Abstract class
  //Below is the syntax of a pure virtual function
  virtual void MakeSound() = 0;

};
//: represents inheritance in this case
class Accordion:public Instrument {
  public:
  void MakeSound() {
    cout << "Accordion is playing...\n";
  }
};

class Piano:public Instrument {
  // public:
  // void MakeSound() {
  //   cout << "Piano is playing..,\n";
  // }
};

class Guitar:public Instrument {
  public:
  void MakeSound() {
    cout << "Guitar is playing..,\n";
  }
};

int main () {
  // Instrument i1;

  Instrument* iPointer = new Accordion();
  //when makesound is not defined in this class, if the parent is a pure virtual function, you will not be able to implement this code.
  // Instrument* iPointer2 = new Piano();
  Instrument* iPointer3 = new Guitar();
  Accordion a1;

  // i1.MakeSound();
  a1.MakeSound();
  //right now the point is not using the makeSound from the Accordion class, its using the method from the parent class. This is due to the fact that we did not use a virtual function syntax in the parent function
  // iPointer->MakeSound();
  // iPointer3->MakeSound();
  //when we made it a virtual function it now shows an accordion makesound function.

  // polymorphism in action
  //using the same method yet different outputs
  Instrument* instrument[2] = {iPointer,iPointer3};
  for(int i=0; i<2;i++){
    instrument[i]->MakeSound();
  }
}