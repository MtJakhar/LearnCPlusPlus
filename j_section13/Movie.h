#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <string>

class Movie {
  private:
  //attributes
  std::string name;
  std::string rating;
  int watched;

  public:
  //constructors
  //delegator constructor
  Movie(std::string name_val, std::string rating_val, int watched_val);

  //copy constructor
  Movie(const Movie &source);

  //destructor
  ~Movie();


  //methods declarations
  void increment_watched();
  std::string getName() const;
  std::string getRating()const;

  void set_name(std::string name_val);
  void set_rating(std::string rating_val);
  void set_watched(int watched_val);

  void display() const;
};

#endif