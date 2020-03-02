/*
CH-230-A
a13 p2.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <iostream>
#include <fstream>
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


Complex Complex::conjugate()
{
    Complex Intermediate;
    Intermediate.setReal(real);
    Intermediate.setImaginary( imaginary * (- 1));
    return Intermediate;
}


Complex Complex::operator+(const Complex& toAdd)
{   
    Complex Intermediate;
    Intermediate.setReal(real + toAdd.real);
    Intermediate.setImaginary(imaginary + toAdd.imaginary);
    return Intermediate;
}


Complex Complex::operator-(const Complex& toSubstract)
{
    Complex Intermediate;
    Intermediate.setReal(real - toSubstract.real);
    Intermediate.setImaginary(imaginary - toSubstract.imaginary);
    return Intermediate;
}

Complex Complex::operator*(const Complex& toMultiply)
{
    Complex Intermediate;
    float intermediate1 = real * toMultiply.real;
    float intermediate2 = imaginary * toMultiply.imaginary;
    float intermediate3 = real * toMultiply.imaginary; 
    float intermediate4 = imaginary * toMultiply.real;

    Intermediate.setReal(intermediate1 - intermediate2);
    Intermediate.setImaginary(intermediate3 + intermediate4);
    return Intermediate;
}

void Complex::operator=(const Complex& toEquals)
{
    real = toEquals.real;
    imaginary = toEquals.imaginary;
}

Complex::~Complex()
{
    std::cout << "DESTROYED" << std::endl;
}

// Solving the problem in the which occours while overloading the operator down
std::ofstream& operator<<(std::ofstream& out, const float & toPrint)
{
    out << toPrint;
    return out;
}

std::ofstream&  operator<<(std::ofstream& out,const Complex& toPrint)
{
    if(toPrint.imaginary)
    {
        out << std::noshowpos << toPrint.real << std::showpos << toPrint.imaginary << std::noshowpos << "i" << std::endl;
    }
    else
    {
        out << toPrint.real << std::endl;
    }
    return out;
}

std::ifstream &operator>>(std::ifstream &in, Complex &toPrint)
{
    char cmplxArr[20];
    float ral;
    float img;
    char sign;
    in.getline(cmplxArr, 20, 'i');
    sscanf(cmplxArr, "%f%c%f", &ral, &sign, &img);
    toPrint.real = ral;
    if (sign == '+')
    {
        toPrint.imaginary = img;
    }
    else if (sign == '-')
    {
        toPrint.imaginary = 0 - img;
    }
    else
    {
        toPrint.imaginary = 0;
    }
    return in;
}

std::ostream& operator<<(std::ostream& out, const Complex&  toPrint)
{
    if(toPrint.imaginary)
    {
        out << std::noshowpos << toPrint.real << std::showpos << toPrint.imaginary << std::noshowpos << "i" << std::endl;
    }
    else
    {
        out << toPrint.real << std::endl;
    }
    return out;
}
