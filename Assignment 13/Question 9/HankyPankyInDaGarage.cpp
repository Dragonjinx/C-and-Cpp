/*
CH-230-A
a13 p9.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <iostream>

/*  
    I am creating a custom exception because when both exception were of the same type,
    the main function kept taking only the first exception that was thrown
*/

class MotorException : public std::exception
{
    const char * what() const throw()
    {
        return "This motor has problems.";
    }
};

// Motor Class
class Motor
{
public:
    Motor();
    ~Motor() {}
};

// Car Class
class Car 
{
public:
    Car();
    ~Car() {}
};

/* Garage class that has a Car and motor in it */
class Garage : public Car
{
public:
    Garage();
    ~Garage() {}
};


Motor::Motor()
{
    throw MotorException();
}

Car::Car()
{ 
}

Garage::Garage()
{
    try
    {
        Car();
        Motor();
    }
    catch (const std::exception& motExcept)
    {
        std::cerr << motExcept.what() << std::endl;
        throw "The car in this garage has problems with the motor.";
    }
}


int main()
{
    try
    {
        Garage gar;
    }
    catch (const char *garExcep) 
    {
        std::cerr << "Exception encountered: " << garExcep << std::endl;
    }
    return 0;
}