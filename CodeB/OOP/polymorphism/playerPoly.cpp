#include <iostream>

using namespace std;

class Creature {
  private:
  int Hp;
  int Mana;
  int AttackPower;
  int AbilityPower;

  protected:
  string Name;

  public:

  Creature(string name, int hp, int mana, int attackPower, int abilityPower) {
    Name = name;
    Hp = hp;
    Mana = mana;
    AttackPower = attackPower;
    AbilityPower = abilityPower;
  }

  void GetInfo() {
    cout << "Name: " << Name << endl;
    cout << "Hp: " << Hp << endl;
    cout << "Mana: " << Mana << endl;
    cout << "AttackPower: " << AttackPower << endl;
    cout << "AbilityPower: " << AbilityPower << endl;
  }

  void Attack() {
    cout << Name << " is attacking" << endl;
  }

};

class Player: public Creature {
  private:
  string Role;

  public:
  Player(string name, string role, int hp, int mana, int attackPower, int abilityPower): Creature(name, hp, mana, attackPower, abilityPower) {
    Role = role;
  }

  void BattleCry() {
    cout << "I am " << Name << ", and I will vanquish you monster!!!" << endl;
  }
};

class BossMonster: public Creature {
  private:
  string SpecialAttack;

  public:
  BossMonster(string name, string specialAttack, int hp, int mana, int attackPower, int abilityPower): Creature(name, hp, mana, attackPower, abilityPower) {
    SpecialAttack = specialAttack;
  }

  void BattleCry() {
    cout << "I am " << Name << ", and I will consume you!!!" << endl;
  }

  void UseSpecialAttack() {
    cout << SpecialAttack << " has been used, all heros lose half of their health" << endl;
  }
};



int main () {
  Creature Goblin("gobo", 50, 10, 10, 10);
  Creature Goblin2("Hob gobo", 70, 20, 20, 20);

  Player HeroOne("Neo", "fighter", 200, 100, 20, 20);
  Player HeroTwo("Duo", "fighter", 100, 3000, 10, 30);

  BossMonster Orc("Graum", "Smash", 300, 100, 40, 40);

  Goblin.Attack();
  Goblin2.Attack();

  HeroOne.Attack();
  HeroOne.BattleCry();

  Orc.Attack();
  Orc.BattleCry();

  Creature * CPointer = &HeroOne;
  Creature * BPointer = &Orc;

  CPointer->GetInfo();
  BPointer->Attack();

  return 0;
}