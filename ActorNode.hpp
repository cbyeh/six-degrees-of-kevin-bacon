/**
 * Christopher Yeh
 * cyeh@ucsd.edu
 * Header file representing an ActorNode.
 */
#ifndef ACTORNODE_HPP
#define ACTORNODE_HPP

#include <iostream>
#include <vector>
#include "ActorEdge.hpp"

using namespace std;

/** Defines a node for an ActorNode.
 * Defined by the actor name and its relationships to other actors. */
class ActorNode {

public:

    vector<ActorEdge*> relationships;
    string actorName;

    /** Constructor. Initialize an ActorNode with empty edges and actor name */
    explicit ActorNode(string& actorName);

};

#endif
