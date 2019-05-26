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
#include "ActorGraph.hpp"

using namespace std;

/**
 * @param argc only implemented for three arguments.
 * @param argv 1: bad urls file 2: urls file 3: output file.
 * @return 0 if success, 1 if invalid arguments.
 */
int main(int argc, char** argv) {
    // Check for appropriate arguments. Does not account for invalid files.
    const int NUM_ARGS = 4;
    /*if (argc != NUM_ARGS) {
        cout << "Usage: ./pathfinder movie_cast_tsv_file "
                "u/w pairs_tsv_file /output_paths_tsv_file" << endl;
        return EXIT_FAILURE;
    }*/
    /* const string BAD_URLS = argv[1];
    const string URLS = argv[2];
    const string OUTPUT_FILE = argv[3]; */
    // Error "checking" done. Proceed with program.
    ifstream input;
    ofstream output;
    ActorGraph* actorGraph = new ActorGraph();
    delete actorGraph;
//    input.open(INFILE, ios_base::binary);
//    output.open(OUTFILE, ios_base::trunc);
}
