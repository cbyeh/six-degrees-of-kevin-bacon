/**
 * Christopher Yeh
 * cyeh@ucsd.edu
 * Q&A
 */
 
It was claimed that anyone involved in the Hollywood film industry can be 
linked through their film roles to Kevin Bacon within six steps. You are 
suspicious of such claim and decide to verify it using the given dataset. 
 
1. Before you start to verify the claim, you first notice that it is not 
possible for this claim to be true if the actor graph is not even connected.
We define a connected component of an undirected graph as a largest subgraph 
in which any two vertices are reachable to each other by a path.
Explain how you can verify a given undirected graph is connected 
(i.e all the vertices are in a same connected components). 
You should also include the runtime of your algorithm.

A brute force method may