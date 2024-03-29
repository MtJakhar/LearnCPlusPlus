#include <iostream>
#include <vector>

int main () {
  // you dont need to initialize the vectors to make empty vectors unlike arrays.
  std::vector <int> vector1 {};
  std::vector <int> vector2 {};

  vector1.push_back(10);
  vector1.push_back(20);

  std::cout << "first element v1: " << vector1.at(0) << std::endl;
  std::cout << "second element v1: "<< vector1.at(1) << std::endl;
  std::cout << "size vector1: " << vector1.size() << std::endl;

  vector2.push_back(100);
  vector2.push_back(200);

  std::cout << "first element v2: " << vector2.at(0) << std::endl;
  std::cout << "second element v2: " << vector2.at(1) << std::endl;
  std::cout << "size vector2: " << vector2.size() << std::endl;

  std::vector <std::vector<int>> vector_2D {};
  vector_2D.push_back(vector1);
  vector_2D.push_back(vector2); 

  std::cout <<  "Vector 2D first "<< std::endl;
  std::cout <<  "1st ele of v1: " << vector_2D.at(0).at(0) << std::endl;
  std::cout <<  "2st ele of v1: " << vector_2D.at(0).at(1) << std::endl;
  std::cout <<  "1st ele of v2: " << vector_2D.at(1).at(0) << std::endl;
  std::cout <<  "2st ele of v2: " << vector_2D.at(1).at(1) << std::endl;

  vector1.at(0) = 1000;
  std::cout <<  "Vector 2D second "<< std::endl;
  std::cout <<  "1st ele of v1: " << vector_2D.at(0).at(0) << std::endl;
  std::cout <<  "2st ele of v1: " << vector_2D.at(0).at(1) << std::endl;
  std::cout <<  "1st ele of v2: " << vector_2D.at(1).at(0) << std::endl;
  std::cout <<  "2st ele of v2: " << vector_2D.at(1).at(1) << std::endl;

  std::cout << "vector 1 " << vector1.at(0) << std::endl;
  std::cout << "first element v1: " << vector1.at(0) << std::endl;
  std::cout << "second element v1: "<< vector1.at(1) << std::endl;

  std::cout << "just as expected the 2D did not change, while the second v1 appearance did, cause when v1 was inserted to 2D it happened before the change " << std::endl;

  return 0;
}