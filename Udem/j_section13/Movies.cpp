#include <iostream>
#include "Movies.h"

Movies::Movies() {}

Movies::~Movies() {}

bool Movies::add_Movie(std::string name, std::string rating, int watched) {
  for(const Movie &movie: moviesList) {
    if(movie.getName() == name) {
      return false;
    }
    Movie temp {name, rating, watched};
    moviesList.push_back(temp);
    return true;
  }
  return false;
}

bool Movies::increment_watched(std::string name) {
  for(Movie &movie : moviesList) {
    if(movie.getName() == name) {
      movie.increment_watched();
      return true;
    }
  }
  return false;
}

void Movies::display() const {
  if(moviesList.size() == 0) {
    std::cout << "sorry, no movies to display\n" << std::endl;
  } else {
    std::cout << "\n==========================" <<std::endl;
    for(const auto &movie: moviesList) {
      movie.display();
    }
    std::cout << "\n==========================" <<std::endl;
  }
};