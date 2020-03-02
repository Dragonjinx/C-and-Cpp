/*
CH-230-A
a12 p5.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <iostream>
#include <cstdio>
#include <cmath>
#include "fraction.h"

// Begin Constructors

Fraction::Fraction()
{
    numerator = 1;
    denominator = 1;
}

Fraction::Fraction(int nNum, int nDen)
{
    int tempGCD = GreatestCommon(nNum, nDen);

    numerator = nNum / tempGCD;
    denominator = nDen / tempGCD;
}

Fraction::Fraction(const Fraction& nfrac)
{
    numerator = nfrac.numerator;
    denominator = nfrac.denominator;
}

// End Constructors

// Begin Destructor

Fraction::~Fraction()
{
}

// End Destructor

// Begin Usability functions

int Fraction::GreatestCommon(int num, int den)
{
    int TempoRaryGCD = 1;
    if(num != 1)
    {
        for(int i = 1; i <=num && i <= den; i++)
        {
            if(num%i==0 && den%i==0)
            {
                TempoRaryGCD = i;
            }
        }
    }
    return TempoRaryGCD;
}

int Fraction::LowestCommon(int num, int den)
{
    return ((num * den) / GreatestCommon(num, den));
}

// End usablilty functions

// Begin Operator Overloadinng

void Fraction::operator=(const Fraction& frac)
{
    numerator = frac.numerator;
    denominator = frac.denominator;
}

std::ostream& operator<<(std::ostream& out, const Fraction &Frac)
{
    out << Frac.numerator << "/" << Frac.denominator;
    return out;
}

std::istream& operator>>(std::istream& in, Fraction &Frac)
{
    int num;
    int denum;
    char slash;
    in >> num >> slash >> denum;
    Frac = Fraction(num, denum); // Doing this because it returns the factorised fraction
    return in;
}

// End Operator Overloading