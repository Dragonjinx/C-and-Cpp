/*
CH-230-A
a10 p7.c
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
    double thirst; //new thirst variable

public: 
    // constructors
    Critter(); //Constructor when nothing is set.
    Critter(std::string); //Constructor when ony strin is set
    Critter(std::string, int, int, int); //Constructor when everything is passed
    Critter(std::string, int, int, int, int); //New constructor where you can pass thirst as well
    // setter methods
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
    void setHeight(int newHeight);
    void setThirst(int newThirst); //new function to set thirst
    // getter method
    std::string getName();
    float getHunger();
    int getBoredom();
    int getHeight();
    float getThirst(); //new function to get thirst
    // service method
    void print();
};
