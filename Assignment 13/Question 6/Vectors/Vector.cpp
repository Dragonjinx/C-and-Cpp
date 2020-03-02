/*
CH-230-A
a10 p7.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <iostream>
#include <cmath>
#include "Vector.h"
#include <cfloat>
#include <limits>

// Begin Constructors

Vector::Vector()
{
    Dimention = 0;
    Array = nullptr;
}

Vector::Vector(const int newDimention, double *newLocation)
{
    Dimention = newDimention;
    Array = newLocation;
}

Vector::Vector(const Vector &newVector)
{
    Dimention = newVector.Dimention;
    if (newVector.Array != nullptr && Dimention > 0)
    {
        Array = new double[Dimention];

        for (int i = 0; i < Dimention; i++)
        {
            Array[i] = newVector.Array[i];
        }
    }
    else
    {
        Array = nullptr;
    }
}

// End Constructors

// Begin Destructor

Vector::~Vector()
{
    delete Array;
    Array = nullptr; // To avoid problems with pointers
}

// End Destructor

// Begin Setter Functions

void Vector::setDimention(const int newDimention)
{
    Dimention = newDimention;
}

void Vector::setArray(double *newArray)
{
    Array = newArray;
}

// End Setter Functions

// Begin Getter Functions

int Vector::getDimention() const
{
    return Dimention;
}

double *Vector::getArray() const
{
    return Array;
}

// End Getter Functions

// Begin Additional Functions

double *Vector::setValues()
{
    if (Array == nullptr)
    {
        Array = new double[Dimention];
    }
    double tempvalue = 0;
    std::cout << "Starting input sequence for vector of " << Dimention << " dimentions." << std::endl;
    for (int i = 0; i < Dimention; i++)
    {
        std::cout << "Enter the scalar for dimention " << i << ":";
        std::cin >> tempvalue;
        Array[i] = tempvalue;
    }
    std::cout << "Sequence End." << std::endl;
    return Array;
}

double *Vector::setValues(double *setLocation)
{
    Array = setLocation;
    double tempvalue = 0;
    std::cout << "Starting input sequence for vector of " << Dimention << " dimentions." << std::endl;
    std::cout << "Putting input in given storage location." << std::endl;
    for (int i = 0; i < Dimention; i++)
    {
        std::cout << "Enter the scalar for dimention " << i << ":";
        std::cin >> tempvalue;
        Array[i] = tempvalue;
    }
    std::cout << "Sequence End." << std::endl;
    return Array;
}

int Vector::setNValue(double newValue, int valueDimention)
{
    if (valueDimention <= Dimention && Array != nullptr)
    {
        Array[valueDimention - 1] = newValue;
        return 1;
    }
    else if (Dimention <= 0)
    {
        return 0;
    }
    else
    {
        return -1;
    }
}

double Vector::norm()
{
    if (Dimention > 0 && Array != nullptr)
    {
        double sum = 0;
        double norm = 0;
        for (int i = 0; i < Dimention; i++)
        {
            sum += Array[i];
        }
        norm = sqrt(sum);
        return norm;
    }
    else if (Dimention == 0)
    {
        return 0;
    }
    else
    {
        return 0;
        std::cout << "Error, no valid storage spacec for components of the vector." << std::endl;
    }
}

double Vector::scalar(const Vector &toMultiply) const
{
    if (Dimention == toMultiply.Dimention)
    {
        double sum = 0;
        for (int i = 0; i < Dimention; i++)
        {
            sum += Array[i] * toMultiply.Array[i];
        }
        return sum;
    }
    else
    {
        std::cout << "Error, Dimention mismatch for vectors" << std::endl;
        return -DBL_MAX; // Temporary solution till error handling is taught
    }
}

Vector Vector::add(const Vector &toAdd) const
{
    if (Dimention == toAdd.Dimention)
    {
        double *sum = new double[Dimention];
        Vector temp(Dimention, sum);

        for (int i = 0; i < Dimention; i++)
        {
            sum[i] = Array[i] + toAdd.Array[i];
        }
        return temp;
    }
    else
    {
        std::cout << "Error, Dimention mismatch for vectors" << std::endl;
        Vector nul;
        return nul; // Temporaty solution till error handling is taught
    }
}

Vector Vector::substract(const Vector &toAdd) const
{
    if (Dimention == toAdd.Dimention)
    {
        double *substraction = new double[Dimention];
        Vector temp(Dimention, substraction);

        for (int i = 0; i < Dimention; i++)
        {
            substraction[i] = Array[i] - toAdd.Array[i];
        }
        return temp;
    }
    else
    {
        std::cout << "Error, Dimention mismatch for vectors" << std::endl;
        Vector nul;
        return nul;
    }
}

// End Additional Functions

// Begin Print Function

void Vector::print() const
{
    if (Dimention != 0)
    {
        std::cout << "Vector of dimention: " << Dimention << " with components: " << std::endl;
        std::cout << "{";
        for (int i = 0; i < Dimention; i++)
        {
            std::cout << " " << Array[i];
            if (i < (Dimention - 1))
            {
                std::cout << ",";
            }
        }
        std::cout << " }" << std::endl;
    }
    else if (Dimention == 0)
    {
        std::cout << std::endl
                  << "Vector has no dimentions" << std::endl;
    }
    else if (Array == nullptr)
    {
        std::cout << std::endl
                  << "Nothing is stored as components of the vector" << std::endl;
    }
}