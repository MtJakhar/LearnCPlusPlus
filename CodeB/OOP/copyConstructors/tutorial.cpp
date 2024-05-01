#include <iostream>

using namespace std;

/*
  copy constructors - copy the attributes/parameters of a sibling class.

  there is a default copy constructor which only works if you do not use pointers.

  copy constructor
  -need to be in public
  -no return type
  -same name as class
  -as a parameter it will receive an object (a datatype created from class) from the same type of class it belongs to.


  note: You can only pass an object by reference(&) or by value.

  passing by reference - takes original address, and pass the address where the object is stored
  passing by value - copys the entire object in a new block of memory

  you cannot pass by value in  a copy constructor because the object, which is from the same class, you are copying doesnt have the copy constructor assigned to it yet because you are creating that copy constructor.

  therefore you must use pass by reference(&)

  in order to prevent any changes from occuring in the original, we must lead the parameter which is being passed by reference with a const

  Book (const Book& original) {code...;}


*/

class Book {
  public:
  string Title;
  string Author;
  float* Rates;
  int RatesCounter;

  Book(string title, string author) {
    Title = title;
    Author = author;

    Rates = new float[RatesCounter];
    Rates[0] = 4;
    Rates[1] = 5;

    cout << "Constructor activated: " + Title + " Created\n";
  }

  //copy constructor

//incorrect because pass by value, uses copy constructor, which lead to recursion infinite calls.

  // Book(Book original) {
  //   Title = original.Title;
  //   Author = original.Author;
  //   Rates = original.Rates;
  //   RatesCounter = original.RatesCounter;
  // } 

//Works cause we are passing by reference, and using const to prevent changes to original.
  // Book(const Book& original) {
  //   Title = original.Title;
  //   Author = original.Author;
  //   Rates = original.Rates;
  //   RatesCounter = original.RatesCounter;
  // } 

//Because rates is using a pointer it is best to do the following
  Book(const Book& original) {
    Title = original.Title;
    Author = original.Author;
    RatesCounter = original.RatesCounter;

    Rates = new float[RatesCounter];
    for (int i = 0; i < RatesCounter; i++) {
      Rates[i] = original.Rates[i];
    }
  }

  ~Book(){
    delete [] Rates;
    Rates = nullptr;
    cout << "Destructor activated: " + Title + " Deleted\n"; 
  };

};

int main () {
  Book book1("the game of thrones", "grr martin");
  Book book2("lord of the rings", "jrr tolkien");

  //the two following lines are both using copy constructor despite the assignment of the second line
  Book book3(book1);
  //this reason it is a copy constructor and not assignment is because at creation the assignment operator defaults to the copy constructor
  // Book book3=book1;

  //while in the code below
  //book3 = book2;
  //this is the assignment operator cause the class in not being created it is instead assigning an already created class to another created class.
}