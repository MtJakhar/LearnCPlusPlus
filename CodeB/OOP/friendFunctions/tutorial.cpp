#include <iostream>
#include <cmath>

using namespace std;
/*
friend functions- has access to private and protected members of a class it is not apart of.

-dont over use the friend keyword, it will break encapsulation.
-friendship is not mutual in programming. Even though homework class can access the equilateralTriangle. the equilateralTriangle wont be able to access the homework class
-Friendship is not inherited.
-used most for overloading operators functions in classes.
*/


class EquilateralTriangle {
  private:
    float a;
    float perimeter;
    float area;

  public:
    void setA(float length) {
      a = length;
      perimeter = 3*a;
      area = (sqrt(3)/4)*(a*a);
    }
    //in order to make a friend function You must use the  friend keyword within the class and then write the declaration of the function after the friend keyword
    friend void PrintResults(EquilateralTriangle);

    //You can also make friend classes
    friend class Homework;


};

void PrintResults(EquilateralTriangle et) {
  cout<<"perimeter = " << et.perimeter << endl;
  cout<< "area = " << et.area << endl; 
};

class Homework {
  public:
    void PrintResults2(EquilateralTriangle et) {
    cout<<"perimeter = " << et.perimeter << endl;
    cout<< "area = " << et.area << endl; 
};

};

int main () {
  EquilateralTriangle et;
  et.setA(3);
  PrintResults(et);
  Homework h;
  h.PrintResults2(et);
}