/**
 * Christopher Yeh
 * cyeh@ucsd.edu
 * Implementation of an ActorEdge.
 */
#include "ActorEdge.hpp"

/** Constructor. Initialize an ActorEdge with a Movie and co-star */
ActorEdge::ActorEdge(Movie* movie, ActorNode* coStar) :
    movie(movie), coStar(coStar), weight(0) { }

/** Constructor. Initialize an ActorEdge with a Movie, co-star, and weight */
ActorEdge::ActorEdge(Movie* movie, ActorNode* coStar, int weight) :
    movie(movie), coStar(coStar), weight(weight) { }
