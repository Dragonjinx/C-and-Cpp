#include <iostream>
#include <cmath>
#include "Circle.h"

Circle::Circle(const char *n, double a) : Area(n)
{
    std::cout << "Creating a circle..." << std::endl;
    radius = a;
}

Circle::~Circle()
{
}

double Circle::calcArea() const
{
    std::cout << "calcArea of Circle...";
    return radius * radius * M_PI;
}

double Circle::calcPeri() const
{
    std::cout << "calcPeri of Circle...";
    return 2 * radius * M_PI;
}