/**
 * Christopher Yeh
 * cyeh@ucsd.edu
 * A main driver to test run the firewall.
 * The firewall works by first parsing known malicious links,
 * Then parsing a second file with links, outputting definitely
 * fine links to an output file. It sacrifices accuracy for space complexity.
 */
#include <iostream>
#include <fstream>
#include <climits>
#include <queue>
#include <algorithm>
#include "ActorGraph.hpp"

using namespace std;

/**
 * @param argc only implemented for three arguments.
 * @param argv 1: bad urls file 2: urls file 3: output file.
 * @return 0 if success, 1 if invalid arguments.
 */
int main(int argc, char** argv) {
    // Check for appropriate arguments. Does not account for invalid files.
    const string INSTRUCTS = "Usage: ./movietraveler "
                             "movie_cast_tsv_file /output_paths_tsv_file";
    const int NUM_ARGS = 3;
    if (argc != NUM_ARGS) {
        cout << INSTRUCTS << endl;
        return EXIT_FAILURE;
    }
    const string IMDB_FILE = argv[1];
    const string OUTPUT_FILE = argv[2];
    // Generate the graph
    const char* IMDB = IMDB_FILE.c_str();
    ActorGraph* actorGraph = new ActorGraph();
    actorGraph->loadFromFile(IMDB, true);
    ifstream infile(IMDB_FILE);
    ofstream outfile(OUTPUT_FILE);
    int numActors = actorGraph->actors.size();
    // Add pairs to queue, write formatting header
    bool have_header = false;
    outfile << "(actor)<--[movie#@year]-->(actor)" << endl;
    // Keep reading lines until the end of file is reached
    cout << numActors << endl;
//    while (infile) {
//        string s;
//        // Get the next line
//        if (!getline(infile, s)) break;
//        if (!have_header) {
//            // Skip the header
//            have_header = true;
//            continue;
//        }
//        istringstream ss(s);
//        vector<string> record;
//        while (ss) {
//            string next;
//            // Get the next string delimited by tab and put it in 'next'
//            if (!getline(ss, next, '\t')) break;
//            record.push_back(next);
//        }
//        if (record.size() != 3) {
//            // We should have exactly 3 columns
//            continue;
//        }
//        string actor_name(record[0]);
//        string movie_title(record[1]);
//        string movie_year(record[2]);
//        short year = stoi(movie_year);
//        // Sort edges for MST
//        vector<ActorEdge*> sortedEdges =
//                actorGraph->actors[actor_name]->relationships;
//        sort(sortedEdges.begin(), sortedEdges.end(),
//                ActorEdge::CompareWeight());
//        cout << "Movie: " + movie_title << endl;
//        for (auto& i : sortedEdges) {
//            cout << i->movie->year << endl;
//        }
    vector<ActorEdge> edges;
    for (auto& actor : actorGraph->actors) {

    }
    infile.close();
    outfile.close();
    delete actorGraph;
}
