#include <iostream>

using namespace std;

int main () {
  //BMI calculator
  //weight/height * height
  float weight, height, bmi;

  cout << "what is your weight(kg)\n";
  cin >> weight;
  cout << "what is your height(kg)\n";
  cin >> height;

  bmi = weight/(height * height);

  if(bmi < 18.5) {
    cout << "\nunderweight\n";
  } else if (bmi > 25) {
      cout << "\noverweight\n";
  } else {
    cout << "\nnormal\n";
  }
  cout << "\nYour bmi is " << bmi;
}