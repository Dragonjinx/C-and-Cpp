/*
CH-230-A
a12 p5.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/
#include <iostream>


/*  Fraction Class
    Constructor Call:
    (Numerator, Denominator)
*/
class Fraction
{
private:
    int numerator; // Numeroator of Fraction
    int denominator; // Denominator of Fraction

    // Finds the Greatest Common Divisor
    int GreatestCommon(int a, int b); 
    // Finds the Lowest Common Multiple
    int LowestCommon(int a, int b);

public:
    // Default constructor for Fraction
    Fraction();
    /*  Paracmetric constructor for Fraction
        (Numerator, Denominator (Default 1))
    */
    Fraction(int, int =1);
    // Copy constructor for Fraction class
    Fraction(const Fraction& nfrac);
    // Descrtuctor for fraction class
    ~Fraction();

    // Overloading the = operator for Fraction Class:
    void operator=(const Fraction &Frac);
    // Overloading the cout operator for Fraction Class:
    friend std::ostream& operator<<(std::ostream& out, const Fraction &Frac);
    // Overloading the cin operator for Fraction Class:
    friend std::istream& operator>>(std::istream& in, Fraction &Frac);
    // Overloading the + operator for the Fraction Class
    Fraction operator+(Fraction& Frac1);
    // Overloading the - operator for the Fraction Class
    Fraction operator-(Fraction& Frac1);
    // Overloading the * operator for the Fraction Class 
    Fraction operator*(Fraction& Frac1);
    // Overloading the / operator for the Fraction Class
    Fraction operator/(Fraction& Frac1);
    // Overloading the < operator for the Fraction Class
    bool operator<(Fraction& Frac1);
    // Overloading the > operator for the Fraction Class
    bool operator>(Fraction& Frac1);
};