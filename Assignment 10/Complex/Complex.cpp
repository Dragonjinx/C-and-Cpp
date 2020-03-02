/*
CH-230-A
a10 p9.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <iostream>
#include "Complex.h"


Complex::Complex()
{
    real = imaginary = 0;
}

Complex::Complex(float newReal, float newImaginary)
{
    real = newReal;
    imaginary = newImaginary;
}

Complex::Complex(const Complex & newComplex)
{
    real = newComplex.real;
    imaginary = newComplex.imaginary;
}

void Complex::setReal(float newReal)
{
    real = newReal;
}

void Complex::setImaginary(float newImaginary)
{
    imaginary = newImaginary;
}

float Complex::getReal()
{
    return real;
}

float Complex::getImaginary()
{
    return imaginary;
}

void Complex::print()
{
    if(imaginary)
    {
        std::cout << std::noshowpos << real << std::showpos << imaginary << std::noshowpos << "i" << std::endl;
    }
    else
    {
        std::cout << real << std::endl;
    }
}



Complex Complex::complexAdder(Complex toAdd)
{   
    Complex Intermediate;
    Intermediate.setReal(real + toAdd.getReal());
    Intermediate.setImaginary(imaginary + toAdd.getImaginary());
    return Intermediate;
}

Complex Complex::conjugate()
{
    Complex Intermediate;
    Intermediate.setReal(real);
    Intermediate.setImaginary( imaginary * (- 1));
    return Intermediate;
}

Complex Complex::complexSubstractor(Complex toSubstract)
{
    Complex Intermediate;
    Intermediate.setReal(real - toSubstract.getReal());
    Intermediate.setImaginary(imaginary - toSubstract.getImaginary());
    return Intermediate;
}

Complex Complex::complexDotProduct(Complex toMultiply)
{
    Complex Intermediate;
    float intermediate1 = real * toMultiply.getReal();
    float intermediate2 = imaginary * toMultiply.getImaginary();
    float intermediate3 = real * toMultiply.getImaginary(); 
    float intermediate4 = imaginary * toMultiply.getReal();

    Intermediate.setReal(intermediate1 + intermediate2);
    Intermediate.setImaginary(intermediate3 + intermediate4);
    return Intermediate;
}

Complex::~Complex()
{
    std::cout << "DESTROYED" << std::endl;
}