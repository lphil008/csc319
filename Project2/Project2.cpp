// Project2.cpp : Defines the entry point for the console application.
//
// Your names !!!!

#include <iostream>
#include <string>
#include <vector>  //include are done at the top of the source code, not in the middle
#include <cassert>


//using, instead of always doing std:cout 
using std::cout;
using std::endl; 


using std::string;

int main( int argc, const char* argv[] )
{
	cout << "# of arguments:" << argc << endl;

	//the 1st parameter is always the name of the program being
	//executed
	//
	// in the subdirectory ".vscode", there is a file "launch.json"
	// there is an attribute 'args', which is the equivalent of using the 
	// command line to pass the parameters to your program

	for ( int x = 0 ; x < argc ; x++) {
		cout << "Parameter #:" << x + 1 << " " << argv[x] << endl;
	}
}
