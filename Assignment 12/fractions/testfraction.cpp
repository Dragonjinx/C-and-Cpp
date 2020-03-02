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
    return 0;
}