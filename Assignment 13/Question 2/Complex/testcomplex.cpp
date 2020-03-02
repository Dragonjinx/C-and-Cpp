/*
CH-230-A
a13 p2.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <iostream>
#include <fstream>
#include "Complex.h"

int main()
{
    Complex c1, c2;

    std::ifstream in("in1.txt");
    std::ifstream in2("in2.txt");
    std::ofstream out("Output.txt", std::ios::out);

    in >> c1;
    in2 >> c2;

    std::cout << "Complex 1 is: " << c1 << std::endl;
    std::cout << "Complex 2 is: " << c2 << std::endl;


    Complex added = c1 + c2;
    Complex substractor = c1 - c2;
    Complex conjugate = c1.conjugate();
    Complex dotprod = c1 * c2;

    out << "The complex number 1 is: "  << std::endl;
    out << c1 << std::endl;

    out << "The complex number 2 is: " << std::endl;
    out << c2 << std::endl;

    out << "The addition of 1 and 2 is:" << std::endl;
    out << added << std::endl;

    out << "The substraction of 2 from 1 is:" << std::endl;
    out << substractor << std::endl;

    out << "The conjugate of 1 is:" << std::endl;
    out << conjugate << std::endl;

    out << "The dot product of 1 and 2 is:" << std::endl;
    out << dotprod << std::endl;

    in.close();
    in2.close();
    out.close();

    return 0;
}