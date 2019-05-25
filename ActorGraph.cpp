/*
 * ActorGraph.cpp
 * Author: <YOUR NAME HERE>
 * Date:   <DATE HERE>
 *
 * This file is meant to exist as a container for starter code that you can use to read the input file format
 * defined in imdb_2019.tsv. Feel free to modify any/all aspects as you wish.
 */
 
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include "ActorGraph.hpp"

using namespace std;

/** Constructor of the Actor Graph. */
ActorGraph::ActorGraph(void) { }

/**
 * Load the graph from a tab-delimited file of actor->movie relationships.
 * @param in_filename - input filename
 * @param use_weighted_edges - if true, compute edge weights as
 *  1 + (2019 - movie_year), otherwise all edge weights will be 1
 * Return true if file was loaded successfully, false otherwise
 */
bool ActorGraph::loadFromFile(const char* in_filename, bool use_weighted_edges) {
    // Initialize the file stream
    ifstream infile(in_filename);
    bool have_header = false;
    // Keep reading lines until the end of file is reached
    while (infile) {
        string s;
        // Get the next line
        if (!getline( infile, s )) break;
        if (!have_header) {
            // Skip the header
            have_header = true;
            continue;
        }
        istringstream ss( s );
        vector <string> record;
        while (ss) {
            string next;
            // Get the next string before hitting a tab character and put it in 'next'
            if (!getline( ss, next, '\t' )) break;
            record.push_back( next );
        }
        if (record.size() != 3) {
            // We should have exactly 3 columns
            continue;
        }
        string actor_name(record[0]);
        string movie_title(record[1]);
        int movie_year = stoi(record[2]);
        // TODO: we have an actor/movie relationship, now what?
    }
    if (!infile.eof()) {
        cerr << "Failed to read " << in_filename << "!\n";
        return false;
    }
    infile.close();
    return true;
}
