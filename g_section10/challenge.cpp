#include <iostream>
#include <string>

using namespace std; 

int main () {

  cout << "This is an encryption program, that uses the Caesarian cypher to encrypt your text.\n\nPlease enter a string so that it can be encrypted.\n"; 

  string word{}; 
  string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"}; 
  string key {"XYZABCDEFGHIJKLMNOPQRSTUVWxyzabcdefghijklmnopqrstuvw"}; 
  string encryptedWord{};

  cin >> word;

  for(char letter : word) {
    encryptedWord += key.at(alphabet.find(letter));
  }

  if(encryptedWord.length() > 0) {
    cout << "Here is your encrypted message: \n" << encryptedWord << endl;
  } else {
    cout << word << endl;
    cout << "string is empty" << endl;
  }

  return 0;
}