
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <fstream>
#include <sstream>

using std::cout;
using std::endl;
using std::ostream;

using namespace std;


class nameBasic {

private:
    string nconst;
    string primaryName;
    int birthYear;
    int deathYear;
    string primaryProfession;

public:
    string getprimaryName();
    int getbirthYear();
    int getdeathYear();
    string primaryProfession();
};

class titlePrincipals {

private:
    string tconst;
    int ordering;
    string category;
    string job;
    vector <string> characters;

public:
    int getOrder();
    string getCategory();
    string getJob();
    vector <string> getCharacters();
};

class titleBasics {

private:
    string title;
    string primaryTitle;
    string originalTiltle;
    bool isAdult;
    int startYear, endYear, runtimeMinutes;
    string genres;

public:
    string getTitle();
    string getprimaryTitle();
    string getoriginalTitle();
    bool getisAdult();
    int getstartYear();
};