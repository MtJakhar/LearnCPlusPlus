#include <iostream> 
#include <vector>

using namespace std;

int main() {
  int scores[] {10,20,30};

  //kind of like for each loop
  for(auto score: scores) {
    cout << score << endl;
  }

  cout << endl;
  return 0;
}