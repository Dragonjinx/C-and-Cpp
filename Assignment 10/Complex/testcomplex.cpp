/*
CH-230-A
a10 p9.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <iostream>
#include "Complex.h"

int main()
{
    float real;
    float imaginary;
    Complex c1, c2, c3;
    // Complex c1(4, 20); //Declaring the first complex number
    // Complex c2(6,9); //Declaring the second complex number

    //I try to get user input for the variables by putting them in a list but they kept getting destroyed as soon as the while loop completed.
    Complex list[3];
    for(int i = 0; i < 3; i++)
    {
        std::cout << "Enter the parameters for the " << i + 1 << " vector" << std::endl;
        std::cout << "Real: ";
        std::cin >> real;
        std::cout << "Imaginary ";
        std::cin >> imaginary;
        list[i].setReal(real);
        list[i].setImaginary(imaginary);
    }
    //Fix:
    c1 = list[0];
    c2 = list[1];
    c3 = list[2];
    
    Complex added = c1.complexAdder(c2);
    Complex substractor = c1.complexSubstractor(c2);
    Complex conjugate = c1.conjugate();
    Complex dotprod = c1.complexDotProduct(c2);

    std::cout << "The complex number 1 is: "  << std::endl;
    c1.print();
    std::cout << std::endl;

    std::cout << "The complex number 2 is: " << std::endl;
    c2.print();
    std::cout << std::endl;

    std::cout << "The addition of 1 and 2 is:" << std::endl;
    added.print();
    std::cout << std::endl;

    std::cout << "The substraction of 2 from 1 is:" << std::endl;
    substractor.print();
    std::cout << std::endl;

    std::cout << "The conjugate of 1 is:" << std::endl;
    conjugate.print();
    std::cout << std::endl;

    std::cout << "The dot product of 1 and 2 is:" << std::endl;
    dotprod.print();
    
    return 0;
}