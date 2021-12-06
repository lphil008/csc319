// Project2.cpp : Defines the entry point for the console application.
//
// Joshua Ssemwanga, Luke-Jay Phillips 

#include <iostream>
#include <string>
#include <vector>  //include are done at the top of the source code, not in the middle
#include <cassert>
#include <algorithm>
#include <fstream>
#include <sstream>


#include "Project2.h"


//using, instead of always doing std:cout 
using std::cout;
using std::endl; 
using std::string;
using std::ostream;
using std::ifstream;

using namespace std;


vector<pair<string, vector<int>>> read_tsv(string filename){
    // Reads a CSV file into a vector of <string, vector<int>> pairs where
    // each pair represents <column name, column values>

    // Create a vector of <string, int vector> pairs to store the result
    vector<pair<string, vector<int>>> result;

    /// Create an input filestream
    std::ifstream myFile(filename);

    // Make sure the file is open
    
    ifstream some_stream(filename);

    if ( !some_stream.is_open() ){
        string line, colname;
        int val;
        if(some_stream.good())
        {
        // Extract the first line in the file
        getline(some_stream, line);

        // Create a stringstream from line
        std::stringstream ss(line);

        // Extract each column name
        while(getline(ss, colname, ' ')){
            
            // Initialize and add <colname, int vector> pairs to result
            result.push_back({colname, vector<int> {}});
        }
        }

	    while(getline(some_stream, line))
    {
        // Create a stringstream of the current line
        std::stringstream ss(line);
        
        // Keep track of the current column index
        int colIdx = 0;
        
        // Extract each integer
        while(ss >> val){
            
            // Add the current integer to the 'colIdx' column's values vector
            result.at(colIdx).second.push_back(val);
            
            // If the next token is a comma, ignore it and move on
            if(ss.peek() == ' ') ss.ignore();
            
            // Increment the column index
            colIdx++;
        }
    }
	    
	}
    some_stream.close();
    return result;

}


int main( int argc, const char* argv[] )
{
    vector<pair<string, vector<int>>> name_basics = read_tsv("name.basics.tsv");
    vector<pair<string, vector<int>>> title_basics = read_tsv("title_basics.tsv");
    vector<pair<string, vector<int>>> pricipals = read_tsv("title_principals.tsv");
    vector<pair<string, vector<int>>> ratings = read_tsv("title_ratings.tsv");
 
	return 0;

}
