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
#include "ActorNode.hpp"

using namespace std;

class DisjointSets {

    struct UpTree {
        ActorNode* head;
        set<ActorNode*> nodes;
    };

public:

    int* array;

    unordered_map<string, UpTree> disjointSet;

    /** Constructor of the Actor Graph. */
    DisjointSets(int numActors);

    /** Finds the set a node is in, by root of its UpTree */
    ActorNode* find(ActorNode* toFind);

    /** Unions two sets */
    void unify(ActorNode* root1, ActorNode* root2);

};

#endif