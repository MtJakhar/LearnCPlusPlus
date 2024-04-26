#include <iostream>
#include <string>

class Move {
  private:
  int *data;

  public:

  //Constructor
  Move(int d);
  //Copy Constructor
  Move(const Move &source);
  //Move Constructor
  /* The move constructors syntax is as follows
    Type(Type &&source) || Type::Type(Type &&source) if define outside of class
    Move(Move &&source) : data(source.data) {
      source.data = nullptr;
    }
    steal the data and then null out the source pointer

    in main function
    Vector<Move> vec;
    vec.push_back(Move{10});
    vec.push_back(Move{20});
  */
  Move(const Move &&source) noexcept;
  //Destructor
  ~Move();
};

int main () {
  return 0;
}