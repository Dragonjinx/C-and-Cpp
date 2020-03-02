/*
CH-230-A
a10 p7.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <iostream>
#include "Vector.h"
#include <cmath>

int main()
{
    Vector a;
    Vector b(3);
    Vector c(b);

    int DimA;
    std::cout << "Enter the dimention for vector A" << std::endl;
    std::cin >> DimA;

    a.setDimention(DimA);
    a.setValues();
    b.setValues();
    c.setValues();
    std::cout << "Vector A:";
    a.print();
    std::cout << "Norm of A is: " << a.norm() << std::endl;
    std::cout << "Vector B:";
    b.print();
    std::cout << "Norm of B is: " << b.norm() << std::endl;
    std::cout << "Vector C:";
    c.print();
    std::cout << "Norm of C is: " << c.norm() << std::endl;

    Vector d = Vector(a.add(b));
    Vector e = Vector(a.substract(b));
    std::cout << "Vector D is the addition of A and B ";
    d.print();
    std::cout << "Vector E is the substraction of A and B ";
    e.print();
    return 0;
}