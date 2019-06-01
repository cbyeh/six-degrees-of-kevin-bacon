/**
 * Christopher Yeh
 * cyeh@ucsd.edu
 * Header file representing a DisjointSet.
 */
#ifndef DISJOINTSET_HPP
#define DISJOINTSET_HPP

#include <iostream>
#include <set>
#include <unordered_map>
#include "ActorGraph.hpp"

using namespace std;

class DisjointSets {

    struct UpTree {
        ActorNode* head;
        set<ActorNode*> nodes;
    };

public:

    vector<ActorNode*> array;
    ActorGraph* actorGraph;

    /** Constructor of the Actor Graph. */
    DisjointSets(int numActors, ActorGraph* actorGraph);

    /** Finds the set a node is in, by root of its UpTree */
    ActorNode* find(ActorNode* toFind) const;

    /** Unions two sets */
    void unify(ActorNode* node1, ActorNode* node2);

};

#endif