#include <iostream>
#include <string>

using namespace std; 

int main () {
  string word{}; 
  string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"}; 
  string key {"XYZABCDEFGHIJKLMNOPQRSTUVWxyzabcdefghijklmnopqrstuvw"}; 
  string formattedWord{};

  cout << "This is an encryption program, that uses the Caesarian cypher to encrypt or decrypt your text.\n\nAre you encrypting (e) or decrypting (d)?.\n"; 

  char answer {};
  cin >> answer; 

  if(answer == 'e') {
    cout << "Please enter word that is to be encrypted.\n";
    cin >> word;

    for(char letter : word) {
      formattedWord += key.at(alphabet.find(letter));
    }

    if(formattedWord.length() > 0) {
      cout << "Here is your encrypted message: \n" << formattedWord << endl;
    } else {
      cout << word << endl;
      cout << "string is empty" << endl;
    }
  } else if (answer == 'd') {
    cout << "Please enter word that is to be decrypted.\n";
    cin >> word; 

    for(char letter : word) {
      formattedWord += alphabet.at(key.find(letter));
    }

    if(formattedWord.length() > 0) {
      cout << "Here is your decrypted message: \n" << formattedWord << endl;
    } else {
      cout << word << endl;
      cout << "string is empty" << endl;
    }
  } else {
    cout<< "your response is invalid" << endl;
  }

  return 0;
}