/*
CH-230-A
a10 p1.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/
#include <iostream>
#include "Critter.h"

void Critter::setName(std::string &newname)
{
    name = newname;
}

void Critter::setHunger(int newhunger)
{
    hunger = newhunger;
}

void Critter::setColor(std::string &newcolor)
{
    color = newcolor;
}

void Critter::setIntelligence(int newintel)
{
    intelligence = newintel;
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
    std::cout << "I am " << name << ". My color is " << color << ". My hunger level is " << hunger << "." << std::endl;
    std::cout << "Me lange ist " << height <<" units lange." << std::endl;
    if (boredom > 5)
    {
        std::cout << "I am boored. Let me go irritate a human now." <<std::endl;
    }
    else
    {
        std::cout << "I am not boored but I am still going to irritate a human." <<std::endl;
    }
    
    if (intelligence < 5)
    {
        std::cout << "I am comparitively dumb" << std::endl;
    }
    else
    {
        std::cout << "I am comparatively smart" << std::endl;
    }
}

int Critter::getHunger()
{
    return hunger;
}

std::string Critter::getColor()
{
    return color;
}

int Critter::getIntelligence()
{
    return intelligence;
}