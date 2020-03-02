/*
CH-230-A
a10 p6.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private: // data members are private
    std::string name;
    float hunger;
    int boredom;
    double height;

public: 
    // constructors
    Critter(); //Constructor when nothing is set.
    Critter(std::string); //Constructor when ony strin is set
    Critter(std::string, int, int, int); //Constructor when everything is passed
    // setter methods
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
    void setHeight(int newHeight);
    // getter method
    std::string getName();
    float getHunger();
    int getBoredom();
    int getHeight();
    // service method
    void print();
};
