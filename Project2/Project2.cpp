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


int main( int argc, const char* argv[] )
{

    vector<pair<string, vector<int>>> name_basics = read_tsv("name.basics.tsv");
    vector<pair<string, vector<int>>> title_basics = read_tsv("title_basics.tsv");
    vector<pair<string, vector<int>>> pricipals = read_tsv("title_principals.tsv");
    vector<pair<string, vector<int>>> ratings = read_tsv("title_ratings.tsv");
 
	return 0;
/*	
	cout << "# of arguments:" << argc << endl;

	//the 1st parameter is always the name of the program being
	//executed
	//
	// in the subdirectory ".vscode", there is a file "launch.json"
	// there is an attribute 'args', which is the equivalent of using the 
	// command line to pass the parameters to your program

	for ( int x = 0 ; x < argc ; x++) {
		cout << "Parameter #:" << x + 1 << " " << argv[x] << endl;
	}*/
}
