#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player {
  //attributes
  string name;
  int health;
  int xp;
  //methods
  void talk(string);
  bool is_dead();
};

int main() {

  Player Anum;
  Player Zain;

  Player players[] {Anum, Zain};

  vector <Player> player_vec{Anum};
  player_vec.push_back(Zain);
 

  Player *enemy {nullptr};
  enemy = new Player;

  delete enemy;

  return 0;
}