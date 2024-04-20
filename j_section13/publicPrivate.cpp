#include <iostream>
#include <string>
using namespace std;

/*
Class Member Access Modifiers

public - accessible everywhere
private - accessible only by members or friends of the class
protected - used with inheritance
*/

class Player {
  private:
  //attributes
  string name {"Player"};
  int health;
  int exp;
  public:
  void talk(string talkAction) {cout << name << " says " << endl;}
  bool isDead();
};

int main () {
  Player Aayra;
  //aayra.name = "Aayra"
  //cout << frank.health << endl;
  Aayra.talk("Hewwo");

  return 0;
}