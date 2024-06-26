#include <iostream>
#include <string>

using namespace std; 

int main () {
  string word{}; 
  string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ!@#$%^&*()_+,./;'[]\\<>?:{}|-= "}; 
  string key {"XYZABCDEFGHIJKLMNOPQRSTUVWxyzabcdefghijklmnopqrstuvw!@#$%^&*()_+,./;'[]\\<>?:{}|-= "}; 
  string formattedWord{};

  cout << "This is an encryption program, that uses the Caesarian cypher to encrypt and then decrypt your text.\n\n"; 

  cout << "Please enter word that is to be encrypted.\n";

  getline(cin, word);

  for(char letter : word) {
    formattedWord += key.at(alphabet.find(letter));
  }

  if(formattedWord.length() > 0) {
    cout << "Here is your encrypted message: \n" << formattedWord << endl;
  } else {
    cout << word << endl;
    cout << "string is empty" << endl;
  }
  formattedWord.clear();
  word.clear();
  cout << "Please enter word that is to be decrypted.\n";
  getline(cin, word);

  for(char letter : word) {
    formattedWord += alphabet.at(key.find(letter));
  }

  if(formattedWord.length() > 0) {
    cout << "Here is your decrypted message: \n" << formattedWord << endl;
  } else {
    cout << word << endl;
    cout << "string is empty" << endl;
  }

  return 0;
}