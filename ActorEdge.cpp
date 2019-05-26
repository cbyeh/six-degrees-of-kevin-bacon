/**
 * Christopher Yeh
 * cyeh@ucsd.edu
 * Implementation of an ActorEdge.
 */
#include "ActorEdge.hpp"

/** Constructor. Initialize an ActorEdge with a Movie */
ActorEdge::ActorEdge(Movie* movie, ActorNode* coStar) :
    movie(movie), coStar(coStar) { }