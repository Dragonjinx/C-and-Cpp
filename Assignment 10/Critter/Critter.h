/*
CH-230-A
a10 p1.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name;
    std::string color;
	int hunger;
	int boredom;
    int intelligence;
	double height;



public: // business logic methods are public
	// setter methods
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
    void setHeight(int newHeight);
    // getter method
	int getHunger();
    int getIntelligence();  
	// service method
	void print();
};
