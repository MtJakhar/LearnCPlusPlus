#include "Movie.h"
#include <string>

void Movie::increment_watched(int number) {
  watched++;
};

std::string Movie::getName() {
  return name;
}

std::string Movie::getRating() {
  return rating;
}

int Movie::getWatched() {
  return watched;
}
