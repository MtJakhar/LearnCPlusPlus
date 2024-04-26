#include <iostream>
#include <cmath>

using namespace std;

const double pi (3.1459);

double calc_area_circle(double radius) {
  return pi * radius * radius;
}

void area_circle() {
  double radius{};
  cout << "\n Enter the radius of the circle: ";
  cin >> radius;
  cout<< "The area of ta circle with radius" << radius << calc_area_circle(radius) << endl;
}

double calc_volume_cylinder(double radius, double height) {
  return pi * radius * radius * height;
}

void volume_cylinder() {
  double radius {};
  double height {};
  cout << "\nEnter the radius of the cylinder: ";
  cin >> radius;
  cout << "\nEnter the height of the cylinder: ";
  cin >> height;

  cout << "The volume of a cylinder with radius " << radius << "and height" << height << "is" << calc_volume_cylinder(radius, height) << endl;
}

int main () {
  area_circle();
  volume_cylinder();

  return 0;
}