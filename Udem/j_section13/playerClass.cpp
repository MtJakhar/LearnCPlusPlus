#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player {
  //attributes
  private:
  string name;
  int health;
  int xp;
  //methods
  public:
  //overload constructors- You can have any number of constructors, but they must have a unique signature/ args

  // default constructors create a no args constructor if no is defined. If a constructor is declared then the default no args constructor will not be applied. If you want a no args constructor while have other types of constructors, you must then define the no args constructor.
  //this is the default constructor
  Player() {
    name = "None";
    health = 100;
    xp = 3;
  };
  //overloading of constrictors
  Player(string name_val) {
    name = name_val;
    //here you can see that values are inputted to the unused args, to prevent garbage values being inputted.
    health = 0;
    xp = 0;
  };

  Player(string name_val, int health_val, int xp_val) {
    name = name_val;
    health = health_val;
    xp = xp_val;
  };

  //using constructor initialization lists, is better because the previous methods are assigning args to values, while using initialization list allows the constructor to 'initialize' the values as args when created.
  Player(string name_val) : name{name_val}, health{0}, xp{0} {};
  Player(string name_val, int health_val, int xp_val) : name{name_val}, health{health_val}, xp{xp_val} {};

  //delegating constructors. To avoid repetition you can delegate a single constructor. Meaning you can call on one constructor which we call the delegated constructor which delegates the params to the new constructors during initialization. 

  //delegated constructor
  Player(string name_val, int health_val, int xp_val) : name{name_val}, health{health_val}, xp{xp_val} {};

  //the delegator constructor simplifies these constructors
  Player(string name_val) : Player{name_val,0,0} {};

  //if you create a constructor with default parameters you can eliminate the need for overloading constructors.
  Player(string name_val = "None", int health_val = 0, int xp_val = 0) : name{name_val}, health{health_val}, xp{xp_val} {};

  //if you use other constructors or default constructors along side this super constructor, then the compiler will error out because it wont know which constructor to call.

  //destructor, one per class release memory
  ~Player();

  void talk(string text) {
    cout << text << endl;
  };
  bool is_dead();
  void set_name(string n) {
    name = n;
  }
  string get_name() {
    return name;
  }
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