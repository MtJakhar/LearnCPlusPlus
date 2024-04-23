/*
must support the following:

class Movie - models a movie :
-movie name
-movie rating
-watched- number of times the movies has been watched

class Movies - models a collection of movie objects

main should be able to :
-create a Movies Object
-ask the movies object to add a movie by providing the movie name, rating, and watched count
-ask the movies object to increment the watch count by 1 for a movie given its name
-ask the movies object to display all of its movies

Additionally, 
-if we try to dd a movie whose name is already in the movies collection we should display this error to the user
-if we try to increment the watched count for a movie whose name is not in the movies collection we should display this error

here is what the project files should look like
-movie.h- include the file with the movie class specification
-movie.cpp- file with the movie class implementation
-movies.h include the Movies class specification
-Movies.cpp- file with the Movies class implementation.
-main.cpp- the main driver that creates a Movies object and adds and increments movies
*/

#include <iostream>
#include <string>
#include "Movie.h"

using namespace std;

int main () {
  Movie("StarWars", "PG", 5);
}