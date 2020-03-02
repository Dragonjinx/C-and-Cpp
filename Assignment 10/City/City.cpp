/*
CH-230-A
a10 p3.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/
#include <iostream>
#include "City.h"

//Function to set name of the city
void City::setName(std::string &newName)
{
    name = newName;
}
//Function to set number of inhabitants of the city
void City::setInhab(int newInhab)
{
    inhab = newInhab;
}
//Function to set the mayor of the city
void City::setMayor(std::string &newMayor)
{
    mayor = newMayor;
}
//Function to set the area of the city
void City::setArea(int newArea)
{
    area = newArea;
}
//Function to get the name of the city
std::string City::getName()
{
    return name;
}
//Function to get the number of inhabitants of the city
long int City::getInhab()
{
    return inhab;
}
//Function to get the mayor of the city 
std::string City::getMayor()
{
    return mayor;
}
//Function to get the area of the city
int City::getArea()
{
    return area;
}

void City::print()
{
        std::cout << "The name of the city is " << name
                  << ", it has " << inhab << " inhabitants."
                  << mayor << " is the city's mayor."
                  << " The city has an area of " << area << " square kilometers."
                  << std::endl;
}
