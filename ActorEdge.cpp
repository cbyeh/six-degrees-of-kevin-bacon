/**
 * Christopher Yeh
 * cyeh@ucsd.edu
 * Header file representing an ActorEdge.
 */
#include "ActorEdge.hpp"

/** Constructor. Initialize an ActorEdge with a movie title and its year */
ActorEdge::ActorEdge(string& movieName, unsigned short year) :
    movieName(movieName), year(year) { }