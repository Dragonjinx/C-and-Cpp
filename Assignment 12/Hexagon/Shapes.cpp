/*
CH-230-A
a12 p1.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <iostream>
#include <cmath>
#include "Shapes.h"
#define _USE_MATH_DEFINES

// Begin Default Constructors

Shape::Shape()
{
}

CenteredShape::CenteredShape() : Shape()
{
}

RegularPolygon::RegularPolygon() : CenteredShape()
{
}

Circle::Circle() : CenteredShape()
{
}

Rectangle::Rectangle() : RegularPolygon()
{
}

Square::Square() : RegularPolygon()
{
}

Hexagon::Hexagon() : RegularPolygon()
{
}

// End Default Constructors

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

Hexagon::Hexagon(const std::string &n, double nx, double ny, double nside, const std::string &ncolor) : RegularPolygon(n, nx, ny, 6)
{
    side = nside;
    color = ncolor;
}

// End Constructors

// Begin Copy Constructors

Shape::Shape(const Shape &newShape) : name(newShape.name)
{
}

CenteredShape::CenteredShape(const CenteredShape &newCent) : Shape((Shape)newCent)
{
    x = newCent.x;
    y = newCent.y;
}

Circle::Circle(const Circle &newCirc) : CenteredShape((CenteredShape)newCirc)
{
    Radius = newCirc.Radius;
}

RegularPolygon::RegularPolygon(const RegularPolygon &newPoly) : CenteredShape((CenteredShape)newPoly)
{
    EdgesNumber = newPoly.EdgesNumber;
}

Rectangle::Rectangle(const Rectangle &newRect) : RegularPolygon((RegularPolygon)newRect)
{
    width = newRect.width;
    height = newRect.height;
}

Square::Square(const Square &newSqur) : RegularPolygon((RegularPolygon)newSqur)
{
    SideLength = newSqur.SideLength;
}

Hexagon::Hexagon(const Hexagon &newHexagon) : RegularPolygon((RegularPolygon)newHexagon)
{
    side = newHexagon.side;
    color = newHexagon.color;
}

// End Copy Constructors

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

double Hexagon::perimeter() const
{
    double perimeter = 6 * side;
    return perimeter;
}

double Hexagon::area() const
{
    double area = 1.5 * (sqrt(3)) * side * side;
    return area;
}

// End Usability Functions

// Begin Destructors

Shape::~Shape()
{
}

CenteredShape::~CenteredShape()
{
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

Hexagon::~Hexagon()
{
}