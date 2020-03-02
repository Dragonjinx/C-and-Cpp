/*
CH-230-A
a12 p1.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/
#include <iostream>
#include "Shapes.h"
#include <cmath>

int main(int argc, char **argv)
{
    Hexagon Hex1("New Hexagon 1", 0, 0, 9, "blue");
    Hexagon Hex2("New hexagon 2", 0, 0, 15, "green");
    Hexagon Hex3 = Hexagon(Hex2);

    Hex1.printName();
    std::cout << Hex1.getName() << " peremeter = " << Hex1.perimeter() << std::endl
              << Hex1.getName() << " area = " << Hex1.area() << std::endl
              << Hex1.getName() << " color = " << Hex1.getColor() << std::endl;
    Hex2.printName();
    std::cout << Hex2.getName() << " peremeter = " << Hex2.perimeter() << std::endl
              << Hex2.getName() << " area = " << Hex2.area() << std::endl
              << Hex2.getName() << " color = " << Hex2.getColor() << std::endl;

    Hex3.printName();
    std::cout << Hex3.getName() << " peremeter = " << Hex3.perimeter() << std::endl
              << Hex3.getName() << " area = " << Hex3.area() << std::endl
              << Hex3.getName() << " color = " << Hex3.getColor() << std::endl;

    return 0;
}