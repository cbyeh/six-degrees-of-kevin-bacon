/**
 * Christopher Yeh
 * cyeh@ucsd.edu
 * Header file representing an ActorEdge.
 */
#ifndef ACTOREDGE_HPP
#define ACTOREDGE_HPP

#include <iostream>
#include "Movie.hpp"
class ActorNode;

using namespace std;

/** Defines an edge for an ActorEdge.
 * Defined by a common movie, co-star, and its weight relative to year released */
class ActorEdge {

public:

    ActorNode* coStar;
    Movie* movie;
    int weight;

    /** Constructor. Initialize an ActorEdge with a Movie */
    explicit ActorEdge(Movie* movie, ActorNode* coStar);

};

#endif