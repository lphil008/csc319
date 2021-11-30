/* GitHub requirement: you must commit/push 
                       (private repository-free with the student pack)
                       your project to your GitHub Account
   insert your name: lphil008
   insert your github user: lphil008
   insert your project name in github:
   invite as a collaborator: mmail002

   once completed, you must upload it to GitHub

	you may have to modify the .h, .cpp and Week12AssignmentTest.cpp for this assignment
*/

#include <cassert>
#include <algorithm>  //sort

#include "Week12Assignment.h"

using std::string;
using std::istringstream;
using std::cout;
using std::endl;
using std::max;



int main() 
{
	int sum  = myFunction1();
	//check if sumSurface is correct
	assert( sum == 22);

	int maxSurface = myFunction2();
	assert( maxSurface == 20);

	int biggest = myFunction3();
	//check if the result is correct
	assert( biggest == 20);

	string name = myFunction4();
	assert( name.compare(SMALL_RECTANGLE) == 0);


	int sumSurface = myFunction5();
	assert( sumSurface == 29);

}	