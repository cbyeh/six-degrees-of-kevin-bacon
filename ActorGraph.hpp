/*
 * ActorGraph.hpp
 * Author: <YOUR NAME HERE>
 * Date:   <DATE HERE>
 *
 * This file is meant to exist as a container for starter code that you can use to read the input file format
 * defined imdb_2019.tsv. Feel free to modify any/all aspects as you wish.
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

/**
 * TODO: add class header
 */
class ActorGraph {

private:

    const short CURR_YEAR = 2019;

public:

    unordered_map<string, ActorNode*> actors;
    unordered_map<string, Movie*> movies;
    unordered_map<string, vector<ActorNode*>> actorsInMovie;

    /** Constructor of the Actor Graph. */
    ActorGraph();

    /** Destructor of the Actor Graph. */
    ~ActorGraph();

    // Maybe add some more methods here

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
