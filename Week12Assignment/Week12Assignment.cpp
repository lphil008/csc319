// Week12Assignment.cpp 
//

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <array>
#include <map>
#include <set>
#include <functional>
#include <numeric>

#include "Week12Assignment.h"

using std::cout;
using std::endl;
using std::ostream;
using std::accumulate;

using namespace std;

Shape::Shape(int px, int py, string pname) : x(px), y(py), name(pname) { 
	
}

Shape::~Shape(){
}
	
string  Shape::getName() const  { return name; }

Rectangle::Rectangle(int px, int py, string pname, int plength, int pheight) : Shape(px, py, pname), length(plength), height(pheight) { ; }

Square::Square(int px, int py, string pname, int plength) : Rectangle(px, py, pname, plength, plength) { 
	; 
}

int myFunction1() {
	Square s(11, 22, "small square", 4);
	Rectangle r(11, 22, "small rectangle", 2, 3);

	vector<Shape *>  shapes;

	int sumSurface = 0;

	//you must insert both s and r in shapes
	//then do the sum of their surface using
	//an iterator to access the 'Shape' in shapes
	//use sumSurface as an accumulator

	//vector<Shape *>::iterator sIt;
	shapes.push_back(new Square{s}); //adds s to vector
	shapes.push_back(new Rectangle{r}); //adds r to vector

	sumSurface = accumulate(shapes.begin(), shapes.end(), sumSurface); //This does the sum and adds it to sumSurface. It also isnt doing what i thought it would

	return sumSurface;
}

int myFunction2() {
	Square s(11, 22, "small square", 2);
	Rectangle r(11, 22, "small rectangle", 4, 5);

	vector<Shape *>  shapes;

	shapes.push_back( &s );
	shapes.push_back( &r );

	//sort the collection in descending order of surface
	//using the sort <algorithm>
	//insert your code here

	sort(shapes.begin(), shapes.end()); // does the sort

	/*sort(shapes.begin(), shapes.end(), 
		[](const Shape &s, const Shape &r)               did not understand how to properply use lambda so i did an overload operator in the .h
			{return s->name.compare(r->name);});*/


	//return the 1st item once sorted
	Shape * sresult = shapes.at( 0 );
	return sresult->getSurface();
}

int myFunction3() {
	Square s(11, 22, "small square", 2);
	Rectangle r(11, 22, "small rectangle", 4, 5);

	vector<Shape *>  shapes;

	//you must insert both s and r in shapes
	//then find the Shape with the biggest surface
	//you must used a function in <algorithm>
	//store the result in biggest
	Shape * biggest = nullptr;

	shapes.push_back(new Square{s}); //adds s to vector
	shapes.push_back(new Rectangle{r}); //adds r to vector


	//return its surface
	return biggest->getSurface();
}

string myFunction4() {
	Square s(11, 22, "small square", 2);
	Rectangle r(11, 22, SMALL_RECTANGLE, 2, 3);

	map<string, Shape *> shapes;

	//you must insert both s and r in shapes
	//then find the Shape with the name SMALL_RECTANGLE
	//you must used a function in map, to find it
	Shape * smallRectangle = nullptr;

	/*smallRectangle->name = "small rectangle"; // i dont underatand why name is red undelined

	shapes.insert(pair<string, Shape *>(smallRectangle->name, smallRectangle));

	auto recFind = shapes.find("small rectangle"); //finds rectangle*/


	//check if the result is correct
	return smallRectangle->getName();
}

int myFunction5() {
	Square s(11, 22, "small square", 3);
	Rectangle r(11, 22, SMALL_RECTANGLE, 4, 5);

	map<string, Shape *> shapes;

	int sumSurface = 0;

	//you must insert both s and r in shapes
	//then do the sum of their surface using
	//an iterator to access the 'Shape' in shapes
	//use sumSurface as an accumulator

	//insert your code here


	//check if sumSurface is correct
	return sumSurface;
}




