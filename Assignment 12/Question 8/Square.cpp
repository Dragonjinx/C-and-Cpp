#include <iostream>
#include "Square.h"

Square::Square(const char *n, double a) : Area(n)
{
    std::cout << "Creating a Square..." << std::endl;
    sideLength = a;
}

Square::~Square()
{
}

double Square::calcArea() const
{
    std::cout << "calcArea of Square...";
    return sideLength * sideLength;
}

double Square::calcPeri() const
{
    std::cout << "calcPeri of Square...";
    return 4 * sideLength;
}