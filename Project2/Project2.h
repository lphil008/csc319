
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
    string getprimaryName()
    {
        return primaryName;
    };
    int getbirthYear()
    {
        return birthYear;
    };
    int getdeathYear()
    {
        return deathYear;    
    };
    string getprimaryProfession()
    {
        return primaryProfession;
    };
};

class titlePrincipals {

private:
    string tconst;
    int ordering;
    string category;
    string job;
    vector <string> characters;

public:
    int getOrder(){
        return ordering;
    };
    string getCategory(){
        return category;
    };
    string getJob(){
        return job;
    };
    vector <string> getCharacters(){
        return characters;
    };
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
    string getTitle(){
        return title;
    };
    string getprimaryTitle(){
        return primaryTitle;
    };
    string getoriginalTitle(){
        return originalTiltle;
    };
    bool getisAdult(){
        return isAdult;
    };
    int getstartYear(){
        return startYear; 
    };
};

class titleRatings {

private:
    string tconst;
    float averageRating;
    int numVotes;

public:
    float getaverageRating()
    {
        return averageRating;
    };
    int getnumVotes()
    {
        return numVotes;
    };
};

class movieScore : public titleRatings{


private:
    
    float ratings;
    int votes;
    float score;


public:
    
    void averageRating(){
        ratings = getaverageRating();
    };
    void numVotes(){
        votes = getnumVotes();
    };
    float moviescore(){
        score = ratings*votes;
        return score;
    };

};

class actorScore : movieScore{

private:
    string nconst;
    float actorScore;
public:
    float getmoviescore(){
        float movie_score = moviescore();
        return movie_score;
    };// this is a 'get' function from the moviescore in the movieScore class
    
    
    
    
};
