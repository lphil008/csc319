// Week12Assignment.h 
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
#include <algorithm>  //sort

using std::cout;
using std::endl;
using std::ostream;
using std::accumulate;
using std::string;

using namespace std;

const string SMALL_RECTANGLE = "small rectangle";

class Shape {

private:
	int x; 
	int y; 
protected:
	string name;

public:
	Shape(int px, int py, string pname);
	
	virtual ~Shape();
	
	virtual  string  getName() const;

	virtual int const getSurface()  = 0;
	
	friend int operator+(const Shape &sh1, const Shape &sh2) //overload the sort function
	{
	return sh1 + sh2;
	}

	friend bool operator<(const Shape &sh1, const Shape &sh2) //overload the sort function
	{
	return sh2 < sh1;
	}

};



class Rectangle : public Shape {

private:
	int length;
	int height;

public:

	Rectangle(int px, int py, string pname, int plength, int pheight);

	virtual int const getSurface()  { return length * height; }
};


class Square : public Rectangle {

public:

	Square(int px, int py, string pname, int plength);
};



int myFunction1();
int myFunction2();
int myFunction3();
string myFunction4();
int myFunction5();
