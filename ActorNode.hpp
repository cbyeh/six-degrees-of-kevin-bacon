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
    unsigned int distance; // Distance from query node
    bool isDone;
    ActorNode* prevActor;
    Movie* prevMovie;

    /** Constructor. Initialize an ActorNode with empty edges and actor name */
    explicit ActorNode(string& actorName);

    /** Comparator for the priority queue in pathfinder */
    struct CompareDistance {
        bool operator() (ActorNode*& n1, ActorNode*& n2) {
            if (n1->distance == n2->distance) {
                return n1->actorName > n2->actorName;
            } else {
                return n1->distance > n2->distance;
            }
        }
    };

};

#endif
