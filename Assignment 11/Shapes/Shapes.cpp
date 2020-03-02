/*
CH-230-A
a10 p6.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <iostream>
#include <cmath>
#include "Shapes.h"
#define _USE_MATH_DEFINES

// Begin Constructors

Shape::Shape(const std::string &n) : name(n)
{
}

CenteredShape::CenteredShape(const std::string &n, double nx, double ny) : Shape(n)
{
    x = nx;
    y = ny;
}

RegularPolygon::RegularPolygon(const std::string &n, double nx, double ny, int nl) : CenteredShape(n, nx, ny)
{
    EdgesNumber = nl;
}

Circle::Circle(const std::string &n, double nx, double ny, double r) : CenteredShape(n, nx, ny)
{
    Radius = r;
}

Rectangle::Rectangle(const std::string &n, double nx, double ny, double nwidth, double nheight) : RegularPolygon(n, nx, ny, 4)
{
    width = nwidth;
    height = nheight;
}

Square::Square(const std::string &n, double nx, double ny, double nside) : RegularPolygon(n, nx, ny, 4)
{
    SideLength = nside;
}

// End Constructors

// Begin Copy Constructors

Shape::Shape(const Shape &newShape) :\
name(newShape.name)
{
}

CenteredShape::CenteredShape(const CenteredShape &newCent) :\
Shape(newCent.getName())
{
    x = newCent.x;
    y = newCent.y;
}

Circle::Circle(const Circle &newCirc) :\
CenteredShape(newCirc.getName(), newCirc.getX(), newCirc.getY())
{
    Radius = newCirc.Radius;
}

RegularPolygon::RegularPolygon(const RegularPolygon &newPoly) :\
CenteredShape(newPoly.getName(), newPoly.getX(), newPoly.getY())
{
    EdgesNumber = newPoly.EdgesNumber;
}

Rectangle::Rectangle(const Rectangle &newRect) :\
RegularPolygon(newRect.getName(), newRect.getX(), newRect.getY(), newRect.getEdge())
{
    width = newRect.width;
    height = newRect.height;
}

Square::Square(const Square &newSqur) :\
RegularPolygon(newSqur.getName(), newSqur.getX(), newSqur.getY(), newSqur.getEdge())
{
    SideLength = newSqur.SideLength;
}

// End Copy Constructors

// Begin Setter Functions

void Shape::setName(const std::string &newName)
{
    name = newName;
}

void CenteredShape::setX(const double X)
{
    x = X;
}

void CenteredShape::setY(const double Y)
{
    y = y;
}

void RegularPolygon::setEdge(const int newEdge)
{
    EdgesNumber = newEdge;
}

void Circle::setRadius(const double newRadius)
{
    Radius = newRadius;
}

void Rectangle::setWidth(const double newWidth)
{
    width = newWidth;
}

void Rectangle::setHeight(const double newHeight)
{
    height = newHeight;
}

void Square::setSide(const double newSide)
{
    SideLength = newSide;
}

// End Setter Function

// Begin Getter Functions

std::string Shape::getName() const
{
    return name;
}

double CenteredShape::getX() const
{
    return x;
}

double CenteredShape::getY() const
{
    return y;
}

int RegularPolygon::getEdge() const
{
    return EdgesNumber;
}

double Circle::getRadius() const
{
    return Radius;
}

double Rectangle::getWidth() const
{
    return width;
}

double Rectangle::getHeight() const
{
    return height;
}

double Square::getSide() const
{
    return SideLength;
}

// End Getter Functions

// Begin Usability Functions

void CenteredShape::move(double X, double Y)
{
    x = X;
    y = Y;
}

double Circle::perimeter() const
{
    double perimeter = 2 * M_1_PI * Radius;
    return perimeter;
}

double Circle::area() const
{
    double area = M_1_PI * (Radius * Radius);
    return area;
}

double Rectangle::perimeter() const
{
    double perimeter = width + height;
    return perimeter;
}

double Rectangle::area() const
{
    double area = width * height;
    return area;
}

double Square::perimeter() const
{
    double perimeter = 2 * SideLength;
    return perimeter;
}

double Square::area() const
{
    double area = SideLength * SideLength;
    return area;
}

void Shape::printName() const
{
    std::cout << "Name is: " << name << "." << std::endl;
}

// End Usability Functions

// Begin Destructors

Shape::~Shape()
{
}

CenteredShape::~CenteredShape()
{
    // Shape::~Shape();Unnecessary for destructors
}

RegularPolygon::~RegularPolygon()
{
}

Circle::~Circle()
{
}

Rectangle::~Rectangle()
{
}

Square::~Square()
{
}