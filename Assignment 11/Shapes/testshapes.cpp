/*
CH-230-A
a10 p6.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/
#include <iostream>
#include "Shapes.h"

int main(int argc, char **argv)
{

    Circle c("New Circle", 3, 4, 7);
    // RegularPolygon r("TRIANGLE", 1, 1, 3);
    Rectangle Rec("New Rectangle", 1, 1, 3, 5);
    Square S("New Square", 5, 5, 4);

    Rec.printName();
    std::cout << Rec.getName() << " peremeter = " << Rec.perimeter() << std::endl
              << Rec.getName() << " area = " << Rec.area() << std::endl;
    c.printName();
    std::cout << c.getName() << " peremeter = " << c.perimeter() << std::endl
              << c.getName() << " area = " << c.area() << std::endl;

    S.printName();
    std::cout << S.getName() << " peremeter = " << S.perimeter() << std::endl
              << S.getName() << " area = " << S.area() << std::endl;

    return 0;
}