#include <iostream>

using namespace std;

/*
polymorphism- allows logic in the base class to work in all of the derived children, and that logic has the same name in the derived class, but may have a different implementation for each class.
*/

class Student {
public: 
  string Name;
  int Age;
  char Gender;
  virtual void Study() = 0;
};

class ProgrammingStudent : public Student {
  public:
  void Study () {
    cout <<"programming" << endl;
  }
};

class ArtStudent: public Student {
  public:
  void Study () {
    cout <<"Art" << endl;
  }
};

class MusicStudent: public Student {
  public:
  void Study () {
    cout <<"Music" << endl;
  }
};

class Monster {
  private:
  public:
  string Name;
  virtual void Attack() = 0;
};

class Zombie: public Monster {
  private:
  public:
  string Name;
  void Attack() {
    cout << "Swallow" << endl;
  }
};

class Vampire: public Monster {
  public:
  string Name;
  void Attack() {
    cout << "Bite" << endl;
  }
};

class Dragon: public Monster {
  public:
  string Name;
  void Attack() {
    cout << "Fire" << endl;
  }
};


int main () {
  Student* students[3];
  students[0] = new ProgrammingStudent();
  students[1] = new ArtStudent();
  students[2] = new MusicStudent();

  for(int i = 0; i <=2; i++) {
    students[i]->Study();
  }

  //deallocating memory
  for(int i = 0; i <= 2; i++) {
    delete  students[i];
  }  

  Monster* monsters[3];
  monsters[0] = new Zombie();
  monsters[1] = new Vampire();
  monsters[2] = new Dragon();

  for(int i= 0; i <=2; i++) {
    monsters[i]->Attack();
  }

  for(int i = 0; i <=2; i++) {
    delete monsters[i];
  }
}