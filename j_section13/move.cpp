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
  Move(const Move &&source) noexcept;
  //Destructor
  ~Move();
};

int main () {
  return 0;
}