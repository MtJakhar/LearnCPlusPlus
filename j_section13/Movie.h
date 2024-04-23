#ifndef _MOVIE_
#define _MOVIE_

#include <string>
#include <iostream>

class Movie {
  private:
  //attributes
  std::string name;
  std::string rating;
  int watched;

  public:
  //constructors

  //delegator constructor
  Movie(std::string movie_name, std::string movie_rating, int times_watched) : name{movie_name}, rating{movie_rating}, watched{times_watched} {};

  //default constructor
  Movie() : Movie("None", "None", 0) {};

  //destructors
  ~Movie();

  //methods go to movie.cpp
  void increment_watched(int number) {};
  std::string getName() {};
  std::string getRating() {};
  int getWatched() {};
};

#endif