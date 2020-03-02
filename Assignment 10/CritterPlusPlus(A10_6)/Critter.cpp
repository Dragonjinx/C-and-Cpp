/*
CH-230-A
a10 p6.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/
#include <iostream>
#include "Critter.h"

//Constructors
Critter::Critter() //Default constructor
{
    name = "default_critter";
    hunger = 0.0;
    boredom = 0;
    height = 5;
    std::cout << "Constructing with no parameters given" <<std::endl;
}

Critter::Critter(std::string newName) //Constructor with name only
{
    name = newName;
    hunger = 0.0;
    boredom = 0;
    height = 5;
    std::cout << "Constructing with only name given" <<std::endl;
}

Critter::Critter(std::string newName, int newHunger,
                 int newBoredoom, int newHeight) //Constructor with all parameters
{
    name = newName;
    hunger = newHunger / (10.0);
    boredom = newBoredoom;
    height = newHeight;
    std::cout << "Constructing with all parameters" <<std::endl;
}

void Critter::setName(std::string &newname)
{
    name = newname;
}

void Critter::setHunger(int newhunger)
{
    hunger = newhunger / (10.0);
}

void Critter::setBoredom(int newBoredoom)
{
    boredom = newBoredoom;
}

void Critter::setHeight(int newHeight)
{
    height = newHeight;
}

void Critter::print()
{
    std::cout << "I am " << name << ". My hunger level is " << hunger << "." << std::endl;
    std::cout << "I am " << height <<" units long." << std::endl;
    std::cout << "My boredom level is " << boredom <<". Let me go irritate a human now." <<std::endl;
}

std::string Critter::getName()
{
    return name;
}

float Critter::getHunger()
{
    return hunger;
}
int Critter::getBoredom()
{
    return boredom;
}
int Critter::getHeight()
{
    return height;
}
