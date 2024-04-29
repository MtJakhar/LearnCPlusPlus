#include <iostream>

using namespace std;

void showMenu() {
  cout << "*********Menu*********"<<endl;
  cout << "1. Check Balance" << endl;
  cout << "2. Deposit" << endl;
  cout << "3. Withdraw" << endl;
  cout << "4. Exit" << endl;
  cout << "**********************" << endl;

}

int main () {
  int option;
  double balance = 500;

  do {
    showMenu();
    cout << "Option: ";
    cin >> option;
    system("cls");
    //clears console

    switch (option) {
    case 1: 
    cout << "balance is: " << balance << " $" << endl;
    break;
    case 2: cout << "deposit amount: ";
    double depositAmount;
    cin >> depositAmount;
    balance += depositAmount;
    break;
    case 3: cout << "withdraw amount: ";
    double withdrawAmount;
    cin >> withdrawAmount;
    balance -= withdrawAmount;
    if(withdrawAmount <= balance) {
      balance -= withdrawAmount;
    } else {
      cout << "Not enough money";
    }
    break;
    }
  } while(option != 4);

}