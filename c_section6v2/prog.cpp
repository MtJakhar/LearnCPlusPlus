#include <iostream>

using namespace std;

int main () {
  const int smallRoomPrice = 25;
  const int largeRoomPrice = 35;
  int smallCount = 0;
  int largeCount = 0;
  double tax =.06;

  
  cout << "number of small and large rooms in type numer in order.";
  cin >> smallCount;
  cin >> largeCount;

  cout << "Estimate for carpet cleaning service\n";
  cout << "Number of small rooms: " << smallCount << endl;
  cout << "Number of large rooms: " << largeCount << endl;
  cout << "Price per small room: $" << smallRoomPrice << endl;
  cout << "Price per large room: $" << largeRoomPrice << endl;
  cout << "Cost: $" << (smallCount * smallRoomPrice) + (largeCount * largeRoomPrice) << endl;
  cout << "Tax: $" << ((smallCount * smallRoomPrice) + (largeCount * largeRoomPrice)) * tax << endl;
  cout << "========================\n";
  cout << "Total estimate: $" << ((smallCount * smallRoomPrice) + (largeCount * largeRoomPrice)) * tax + (smallCount * smallRoomPrice) + (largeCount * largeRoomPrice) << endl;
  cout << "This estimate is valid for 30 days";

  return 0;
}