/*
CH-230-A
a10 p1.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/
#include <iostream>
#include <cstdlib>
#include "Critter.h"


int main(int argc, char **argv)
{
    Critter c;

    std::string name;
    std::string color;
    int hunger;
    int intel;
    int bore;
    int height;

    std::cout << std::endl
         << "Please enter data: " << std::endl;
    
    std::cout << "Name: ";
    std::getline(std::cin, name);
    c.setName(name);
    
    std::cout << "Color: ";
    std::getline(std::cin, color);
    c.setColor(color);

    std::cout << "Hunger: ";
    std::cin >> hunger;
    c.setHunger(hunger);

    std::cout << "Intellighence: ";
    std::cin >> intel;
    c.setIntelligence(intel);

    std::cout << "Boredom: ";
    std::cin >> bore;
    c.setBoredom(bore);

    std::cout << "Height: ";
    std::cin >> height;
    c.setHeight(height);

    std::cout << "You have created:" << std::endl;
    c.print();
    return 0;
}
