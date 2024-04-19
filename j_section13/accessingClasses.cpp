#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player {
  public:
  //attributes
  string name;
  int health;
  int xp;
  //methods
  void talk(string textToSay) {cout << name << " says " << textToSay << endl;};
  bool is_dead();
};

int main () {
  Player echo;
  echo.name = "Echo";
  echo.health = 100;
  echo.xp = 12;
  echo.talk("Hi, There");

  Player *enemy = new Player;
  (*enemy).name = "Enemy";
  (*enemy).health = 100;
  enemy->xp = 15;

  return 0;
};