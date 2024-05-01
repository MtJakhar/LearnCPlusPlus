#include <iostream>

using namespace std;

/*
  destructors- perform cleanup tasks before object is deleted.

  constructors -allocate memory
  destructors- deallocate memory

  destructor rules
  -starts with ~
  -Must have same name as class
  -does not have return type
  -does not receive params
  -is a member function of a class
  -is in public
  -one destructor per class
*/

class Book {
  public:
  string Title;
  string Author;
  int* Rates;
  int RatesCounter;

  Book(string title, string author) {
    Title = title;
    Author = author;

    Rates = new int[RatesCounter];
    Rates[0] = 4;
    Rates[1] = 5;

    cout << "Constructor activated: " + Title + " Created\n";
  }
  //this is the destructor syntax
  ~Book(){
    delete [] Rates;
    Rates = nullptr;
    cout << "Destructor activated: " + Title + " Deleted\n"; 
  };

};

int main () {
  Book book1("the game of thrones", "grr martin");
  Book book2("lord of the rings", "jrr tolkien");
}