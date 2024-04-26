#ifndef _ACCOUNT_H_ //include guard v1
#define _ACCOUNT_H_ //include guard v1

//include guard v2
// Account.h - #pragma once
// #pragma once

#include <string>

class Account {
private:
  std::string name;
  double balance;

public:
  void set_balance(double bal) {balance = bal;}
  double get_balance() {return balance;}

  //methods is be declared outside of class
  void set_name(std::string n) {};
  std::string get_name() {};

  bool deposit(double amount);
  bool withdraw(double amount);
};


#endif //include guard v1