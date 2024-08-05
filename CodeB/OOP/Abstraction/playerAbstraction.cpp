#include <iostream>

using namespace std;

class Creature {
  private:
  int Health;
  int AttackPower;
  int AbilityPower;

  protected:
  string Name;

  public:
  Creature(string name, int health, int attackPower, int abilityPower) {
    Health = health;
    AttackPower = attackPower;
    AbilityPower = abilityPower;
  }
  virtual void randomAttack() = 0;

  virtual void battleCry() = 0;
};

class Player: public Creature {
  private:
  string Role;

  public:
  Player(string name, string role, int health, int attackPower, int abilityPower): Creature(name, health, attackPower, abilityPower) {
    Role = role;
  }

  void randomAttack() {
    cout << Name << " attacks, and does "  << rand() % 100 + 1 << " damage" << endl;
  }

  void battleCry() {
    cout << "I am a hero, prepare to die!!" << endl;
  }
};

class Boss: public Creature {
  private:
  string Intro;

  public:
  Boss(string name, string intro, int health, int attackPower, int abilityPower): Creature(name, health, attackPower, abilityPower) {
    Intro = intro;
  }

  void randomAttack() {
    cout << Name << " attacks, and does "  << rand() % 200 + 1 << " damage." << endl;
  }

  void battleCry() {
    cout << "I am a the Boss, prepare to die!!" << endl;
  }

  void introduction() {
    cout << Intro << ", also my name is " << Name << " pleased to meet you." << endl;
  }
};

int main () {
  Player HeroMan("Marduk", "knight", 100, 100, 50);
  Boss Dragon("Tiamat", "I am the Destroyer of worlds, Consumer of life, and the coming of chaos", 300, 200, 300);

  HeroMan.battleCry();
  HeroMan.randomAttack();

  Dragon.introduction();
  Dragon.battleCry();
  Dragon.randomAttack();

  return 0;
}