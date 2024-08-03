#include<iostream>
#include<list>

using namespace std;

class Player {
  private:
  string Name;
  string Role;
  string Race;
  int Level = 1;
  int Health;
  int Strength;
  int Dexterity;
  int Constitution;
  int Wisdom;
  int Charisma;

  public:
  Player(string name, string role, string race, int level, int health, int strength, int dexterity, int constitution, int wisdom, int charisma) {
    Name = name;
    Role = role;
    Race = race;
    Level = level;
    Health = health;
    Strength = strength;
    Dexterity = dexterity;
    Constitution = constitution;
    Wisdom = wisdom;
    Charisma = charisma;
  };

  void GetInfo() {
    cout << "Name: " << Name << endl;
    cout << "Role: " << Role << endl;
    cout << "Race: " << Race << endl;
    cout << "Level: " << Level << endl;
    cout << "Health: " << Health << endl;
    cout << "Strength: " << Strength << endl;
    cout << "Dexterity: " << Dexterity << endl;
    cout << "Constitution: " << Constitution << endl;
    cout << "Wisdom: " << Wisdom << endl;
    cout << "Charisma: " << Charisma << endl;
  }

  void LevelUp() {
    if(Level < 20) {
      Level++;
      cout << "You have leveled up!!! You are now level " << Level << endl;
    } else {
      cout << "You have reached the maximum level." << endl;
    }
  }

  void BattleCry() {
    cout << "I am " << Name << " Hear me Roar!!!" << endl; 
  }

  void PushEnemy() {
    if(Strength >= 15) {
      cout << "You have pushed the enemy." << endl;
    } else {
      cout << "You are too weak." << endl;
    }
  }
};

int main () {
  Player Player1("Esfandiyar", "Fighter", "Human",14, 500, 14, 18, 20, 12, 18);
  Player Player2("Rostom", "Barbarian", "Human", 16, 300, 20, 16, 16, 16, 10);
  Player1.GetInfo();
  cout << "\n";
  Player2.GetInfo();
  cout << "\n";
  Player1.BattleCry();
  Player2.BattleCry();
  cout << "\n";
  Player1.PushEnemy();
  Player2.PushEnemy();

  return 0;
}