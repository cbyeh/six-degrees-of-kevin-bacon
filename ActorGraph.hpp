/**
 * Christopher Yeh
 * cyeh@ucsd.edu
 * A main driver to test run the firewall.
 * The firewall works by first parsing known malicious links,
 * Then parsing a second file with links, outputting definitely
 * fine links to an output file. It sacrifices accuracy for space complexity.
 */
#ifndef ACTORGRAPH_HPP
#define ACTORGRAPH_HPP

#include <iostream>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include "ActorNode.hpp"
#include "Movie.hpp"

using namespace std;

/** Defines a Graph for our actors and their relationships by movie..
 * Defined by a lists of unique actors, movies, and stars of the movies.
 * actors:
 * movies:
 */
class ActorGraph {

private:

    const short CURR_YEAR = 2019;

public:

    unordered_map<string, ActorNode*> actors;
    unordered_map<string, Movie*> movies;
    vector<ActorEdge> edges;

    /** Constructor of the Actor Graph. */
    ActorGraph();

    /** Destructor of the Actor Graph. */
    ~ActorGraph();

    /**
    * Load the graph from a tab-delimited file of actor->movie relationships.
    * @param in_filename - input filename
    * @param use_weighted_edges - if true, compute edge weights as
    *  1 + (2019 - movie_year), otherwise all edge weights will be 1
    * Return true if file was loaded successfully, false otherwise
    */
    bool loadFromFile(const char* in_filename, bool use_weighted_edges);

};


#endif
