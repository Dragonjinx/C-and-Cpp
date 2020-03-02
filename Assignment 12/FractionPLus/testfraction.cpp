/*
CH-230-A
a12 p5.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <iostream>
#include "fraction.h"

int main()
{
    std::cout << "Input numerator and denominator for the  fraction (a/b)" << std::endl;
    Fraction A;
    std::cin >> A;
    std::cout << "Your input (optimiesed) was: " << A << std::endl;
    Fraction B(6,9);
    std::cout << "Fraction B is: " << std::endl <<  B << std::endl;
    std::cout << "Fraction B + A is : " << A + B << std::endl;
    if(A < B)
    {
        std::cout << A << "is less than " << B << std::endl;
    }
    else
    {
        std::cout << A << "is not less than " << B << std::endl;
    }
    return 0;
}