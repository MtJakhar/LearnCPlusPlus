#include <iostream>
#include <list>

using namespace std;

class Creature {
  private:
  string Name;
  int Level;
  int Hp;
  int Mana;
  int AttackPower;
  int AbilityPower;

  public:
  Creature(string name, int level, int hp, int mana, int attackPower, int abilityPower) {
    Name = name;
    Level = level;
    Hp = hp;
    Mana = mana;
    AttackPower = attackPower;
    AbilityPower = abilityPower;
  }

  void Attack() {
    cout << Name << " is attacking" << endl;
  }
};

class Player: public Creature {
  private:
  string Role;
  int Charisma;


  public:
  Player(string name, string role, int level, int hp, int mana, int attackPower, int abilityPower, int charisma): Creature(name, level, hp, mana, attackPower, abilityPower) {
    Role = role;
    Charisma = charisma;
  }

  void BattleCry() {
    cout << "I am a hero, here me roar!!!" << endl;
  }

};

int main () {
  Creature goblin("Goblin", 1, 50, 20, 5, 2);
  Creature ghost("Ghost", 4, 10, 25, 5, 2);

  Player heroMan("Balariphon", "fighter", 5, 200, 100, 30, 20, 10);
  Player heroWoman("Atalanta", "Ranger", 5, 200, 100, 30, 20, 10);

  goblin.Attack();
  ghost.Attack();
  heroMan.Attack();
  heroMan.BattleCry();
  heroWoman.Attack();
  heroWoman.BattleCry();
}