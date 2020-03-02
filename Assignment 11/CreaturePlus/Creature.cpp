/*
CH-230-A
a10 p4.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <iostream>
#include "Creature.h"

Creature::Creature() : distance(10)
{
}

void Creature::run() const
{
    std::cout << "running " << distance << " meters!\n";
}

Wizard::Wizard() : distFactor(3)
{
}

void Wizard::hover() const
{
    std::cout << "hovering " << (distFactor * distance) << " meters!\n";
}

Jesus::Jesus() : SuchAmaze(69)
{
}

void Jesus::WalkOnWater() const
{
    std::cout << "Walking " << (SuchAmaze * distance) << " meters ON WATER!\n";
}

Eagle::Eagle() : Airspeed(4.20)
{
}

void Eagle::run() const
{
    std::cout << "I ain't the one who's doing the running though.\n"; 
}

void Eagle::FREEDOM() const
{
    std::cout << "Delivering Freedom at " << (Airspeed * distance) << " countries per second.\n";
}
