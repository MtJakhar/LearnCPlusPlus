#include <string>
#include "Movie.h"
#include <iostream>

//constructors
Movie::Movie(std::string name_val, std::string rating_val, int watched_val) : name{name_val}, rating{rating_val}, watched{watched_val} {};

//copy constructor
Movie::Movie(const Movie &source) : Movie{source.name, source.rating, source.watched}{};

//destructor
Movie::~Movie(){};

//methods

void Movie::increment_watched() {
  watched++;
}

std::string Movie::getName() const {
  return name;
}

std::string Movie::getRating() const {
  return rating;
}

void Movie::set_name(std::string name_val) {
  name = name_val;
}

void Movie::set_rating(std::string rating_val) {
  rating = rating_val;
}

void Movie::set_watched(int watched_val) {
  watched = watched_val;
}

void Movie::display() const {
  std::cout << name << "," << rating << "," << watched << std::endl;
};