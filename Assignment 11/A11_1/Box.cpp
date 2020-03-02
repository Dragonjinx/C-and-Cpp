/*
CH-230-A
a11 p1.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <iostream>
#include "Box.h"

// Start COnstructors

Box::Box()
{
    x = 0;
    y = 0;
    z = 0;
    //std::cout << "Empty Constructor" << std::endl;
}

Box::Box(const double X, const double Y, const double Z)
{
    x = X;
    y = Y;
    z = Z;
    //std::cout << "All parameters defined" << std::endl;
}

Box::Box(const Box &newBox)
{
    x = newBox.x;
    y = newBox.y;
    z = newBox.z;
    //std::cout << "Copy Constructor" << std::endl;
}

// End Constructors

// Start Destructor

Box::~Box()
{
    //std::cout << "Box Destoryed" << std::endl;
}

// End Destructor

// Start Setter Methods

void Box::setX(double newX)
{
    x = newX;
}

void Box::setY(double newY)
{
    y = newY;
}

void Box::setZ(double newZ)
{
    z = newZ;
}

// End Setter Methods

//Start Getter Methods

double Box::getX() const
{
    return x;
}

double Box::getY() const
{
    return y;
}

double Box::getZ() const
{
    return z;
}

// End Getter Methods