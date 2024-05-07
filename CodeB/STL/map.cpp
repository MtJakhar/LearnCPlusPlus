#include <iostream>
#include <map>
#include <unordered_map>
#include <string>
#include <list>

using namespace std;
/*
  map- a collection of key value pairs
    -regular map orders the key value pairs
    -to access an element use its key
*/

int main () {
  map<string, string> myDictionary;
  myDictionary.insert(pair<string,string>("apple", "der apfel"));
  myDictionary.insert(pair<string,string>("banana", "die Banane"));
  myDictionary.insert(pair<string,string>("orange", "die Orange, die Apfelsine"));
  myDictionary.insert(pair<string,string>("strawberry", "die Erdbeere"));

  for(auto pair : myDictionary) {
    cout << pair.first << " - " << pair.second << endl;
  }

  myDictionary["strawberry"] = "not a berry";
  cout << myDictionary["strawberry"];
}

int main () {
  map<string,list<string>> pokedex;
  list<string> pikachuAttacks { "thunder shock" , "Tail whip", "quick attack"};
  list<string> charmanderAttacks { "flamethrower" , "Tail whip", "quick attack"};
  list<string> chikoritaAttacks { "razor whip" , "vine whip", "quick attack"};

  pokedex.insert(pair<string, list<string>>("pikachu", pikachuAttacks));
  pokedex.insert(pair<string, list<string>>("charmander", charmanderAttacks));
  pokedex.insert(pair<string, list<string>>("chikorita", chikoritaAttacks));

  for (auto pair: pokedex) {
    cout << pair.first << " - ";
    for(auto attack: pair.second){
      cout << attack << ", ";
    }
    cout << endl;
  }
}