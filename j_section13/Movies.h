#ifndef _MOVIES_H_
#define _MOVIES_H_

#include <string>
#include <vector>
#include "Movie.h"

class Movies {
  private:
  // attributes
  std::vector<Movie> moviesList;

  public:
  //constructors
  Movies();
  //destructor
  ~Movies();
  //methods
  bool increment_watched(std::string name);
  bool add_Movie(std::string name, std::string rating, int watched);
  void display() const;

};

#endif