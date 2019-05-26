/**
 * Christopher Yeh
 * cyeh@ucsd.edu
 * Header file representing a Movie.
 */
#ifndef MOVIE_HPP
#define MOVIE_HPP

#include <iostream>

using namespace std;

class Movie {

public:

    string movieName;
    int year;

    /** Constructor. Initialize a Movie with a movie title and its year */
    Movie(string& movieName, unsigned short year);

};

#endif