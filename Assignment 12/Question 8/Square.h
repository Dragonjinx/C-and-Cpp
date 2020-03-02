#ifndef _SQUARE_H
#define _SQUARE_H
#include "Area.h"
#include <iostream>

class Square : public Area
{
private:
    double sideLength;

public:
    Square(const char *, double);
    ~Square();
    double calcArea() const;
    double calcPeri() const;
};

#endif