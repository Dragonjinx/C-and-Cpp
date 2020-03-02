/*
CH-230-A
a10 p3.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/
#include <string>

class City
{
private:
    std::string name; //Name of the city
    long int inhab; //Inhibitants of the city
    std::string mayor; //Mayor of the city
    int area; //Area of the city in km^2

public:
    //Functions for setting all variables
    void setName(std::string &newName);
    void setInhab(int newInhab);
    void setMayor(std::string &newMayor);
    void setArea(int newArea);
    //function for getting all variables
    std::string getName();
    long int getInhab();
    std::string getMayor();
    int getArea();
    //Prints everything
    void print();
};