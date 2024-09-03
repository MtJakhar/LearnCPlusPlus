#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string integerToHex(int number)
{
  string hexadecimal = "";
  int remainder;

  if (number == 0)
  {
    return "0";
  }

  while (number > 0)
  {
    remainder = number % 16;
    switch (remainder)
    {
    case 10:
      hexadecimal = 'A' + hexadecimal;
      break;
    case 11:
      hexadecimal = 'B' + hexadecimal;
      break;
    case 12:
      hexadecimal = 'C' + hexadecimal;
      break;
    case 13:
      hexadecimal = 'D' + hexadecimal;
      break;
    case 14:
      hexadecimal = 'E' + hexadecimal;
      break;
    case 15:
      hexadecimal = 'F' + hexadecimal;
      break;
    default:
      hexadecimal = to_string(remainder) + hexadecimal;
      break;
    }
    number /= 16;
  }

  return hexadecimal;
}

int main()
{
  int userInput;
  cout << "please enter a integer: ";
  cin >> userInput;
  cout << integerToHex(userInput) << endl;
  return 0;
}