#include <iostream>

using namespace std;

class Creature {
  private:
  int Hp;
  int Mana;
  int OverallStats;

  protected:
  string Name;

  public:
  Creature(string name, int hp, int mana, int overallStats) {
    Name = name;
    Hp = hp;
    Mana = mana;
    OverallStats = overallStats;
  }

  void GetInfo() {
    cout << "Name: " << Name << endl;
    cout << "Hp: " << Hp << endl;
    cout << "Mana: " << Mana << endl;
    cout << "OverallStats: " << OverallStats << endl;
  }
};

class Hero:public Creature {
  private:
  string Role;

  public:
  Hero(string name, string role, int hp, int mana, int overallStats): Creature(name, hp, mana, overallStats) {
    Role = role;
  }

  void Attack() {
    cout << Name << " attacks" << endl;
  }
};

class BossMonster:public Creature {
  private:
  int SpecialAttack;

  public:
  BossMonster(string name, int specialAttack, int hp, int mana, int overallStats): Creature(name, hp, mana, overallStats) {
    SpecialAttack = specialAttack;
  }

  void Attack() {
    cout << Name << " uses special attack, enemies take " << SpecialAttack << " damage" << endl;
  }
};

int main () {

  Creature Goblin("gobo", 10, 10, 30);
  Goblin.GetInfo();

  Hero Jason("Jason Argo", "warrior", 100, 10, 200);
  Jason.Attack();

  BossMonster Asmodeus("asmodeus", 100, 200, 200, 500);
  Asmodeus.Attack();
  Asmodeus.GetInfo();

  return 0;
}