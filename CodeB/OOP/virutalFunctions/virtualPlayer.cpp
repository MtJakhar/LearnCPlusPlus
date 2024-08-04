#include <iostream>

using namespace std;

class Creature {
  private: 
  int Hp;
  int Mana;
  int attackP;

  protected:
  string Name;

  public:
  Creature(string name, int hp, int mana, int attackP) {
    Name = name;
    Hp = hp;
    Mana = mana;
    attackP = attackP;
  }

  void Attack() {
    cout << Name << " attacks" << endl;
  }

  virtual void BattleCry() = 0;
};

class Player:public  Creature {
  private: 
  string Role;

  public:
  Player(string name, string role, int hp, int mana, int attackP):Creature(name, hp, mana, attackP) {
    Role = role;
  }

  void Attack() {
    cout << "Hero " << Name << " attacks" << endl;
  }

  void BattleCry() { 
    cout << "I am a hero!!!";
  }
};

class BossMonster: public Creature{
  private:
  string LegendaryAction;

  public:
  BossMonster(string name, string legendaryAction, int hp, int mana, int attackP): Creature(name, hp, mana, attackP) {
    LegendaryAction= legendaryAction;
  }

  void Attack() {
    cout << "Great Monster" << Name << " attacks!!!" << endl;
  }

  void BattleCry() {
    cout << "RRROOOAARR!!!!" << endl;
  }
};

int main () {
  //an abstract class cannot create an object
  // Creature Goblin("gogo", 10, 10, 10);

  Player heroOne("milkly", "tank", 200, 10, 19);
  BossMonster boss("Abadan", "Explosion", 300, 50, 100);

  heroOne.Attack();
  heroOne.BattleCry();

  boss.Attack();
  boss.BattleCry();
}