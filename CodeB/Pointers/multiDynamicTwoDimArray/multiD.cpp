#include <iostream>

using namespace std;

int main () {
  //create 2d dynamic array

  int rows, columns;

  cout << "enter rows and columns: ";

  cin >> rows >> columns;

  int** table = new int* [rows];

  for(int i = 0; i < rows; i++) {
    table[i] = new int [columns];
  }

  table[1][2] = 88;

  cout << table[1][2] << endl;

  for(int i = 0; i < rows; i++) {
    delete[] table[i];
  } 

  delete[] table;
  table = NULL; 

  return 0;
}