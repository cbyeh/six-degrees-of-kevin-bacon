/**
 * Christopher Yeh
 * cyeh@ucsd.edu
 * Header file representing an ActorEdge.
 */

#ifndef ACTOREDGE_HPP
#define ACTOREDGE_HPP

#include <iostream>

using namespace std;

class ActorEdge {

private:

    string movieName;
    unsigned short year;

    /** Constructor. Initialize an ActorEdge with a movie title and its year */
    ActorEdge(string& movieName, unsigned short year);

};

#endif