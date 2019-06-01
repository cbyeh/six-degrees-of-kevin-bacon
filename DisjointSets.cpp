/**
 * Christopher Yeh
 * cyeh@ucsd.edu
 * Implementation of an ActorEdge.
 */
#include "DisjointSets.hpp"

/** Constructor of the Actor Graph. */
DisjointSets::DisjointSets(int numActors) {
    array = new int[numActors];
    for (int i = 0; i < numActors; i++) {
        array[i] = -1;
    }
}

/** Finds the set a node is in, by root of its UpTree */
ActorNode* DisjointSets::find(ActorNode* toFind) {

}

/** Unions two sets */
void DisjointSets::unify(ActorNode* root1, ActorNode* root2) {
    if (find(root1) == find(root2)) {
        return;
    }
}