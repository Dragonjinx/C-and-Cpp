/*
CH-230-A
a10 p4.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <iostream>
#include "Person.h"

// Begin Constructors

Person::Person()
{
    name = "Ferus";
    age = 0;
    weight = 0;
    salary = 0;
    std::cout << "A Person has been concieved" << std::endl;
}

Person::Person(const std::string &newName, const int newAge, const float newWeight, const double newSalary)
{
    name = newName;
    age = newAge;
    weight = newWeight;
    salary = newSalary;
    std::cout << "Person " << name << " joins the fray" << std::endl;
}

Person::Person(const Person &toClone)
{
    name = toClone.name;
    age = toClone.age;
    weight = toClone.weight;
    salary = toClone.salary;
    std::cout << "Person " << name << " has been cloned!" << std::endl;
}

// End Constructors

// Begin Destructors

Person::~Person()
{
    std::cout << "Destroying Person " << name << " (Terminator Music)" << std::endl;
    if(name == "Vladimir Vladimirovich Putin")
    {
        std::cout << "HA! Foolish robot, our GLORIOUS president cannot be destroyed." << std::endl;
    }
    else if(name == "Barack Hussein Obama II")
    {
        std::cout << "OBAMA IS GONE" <<std::endl;
    }
}

// End Destructors

// Begin Setter FUnctions

void Person::setName(const std::string &newName)
{
    name = newName;
}

void Person::setAge(const int newAge)
{
    age = newAge;
}

void Person::setWeight(const float newWeight)
{
    weight = newWeight;
}

void Person::setSalary(const double newSalary)
{
    salary = newSalary;
}

// End Setter Functions

// Begin Getter Functions

std::string Person::getName() const
{
    return name;
}

int Person::getAge() const
{
    return age;
}

float Person::getWeight() const
{
    return weight;
}

double Person::getSalary() const
{
    return salary;
}

// End Getter Functions

// Begin Printer Functions

void Person::print() const
{
    std::cout << "The name of the person is " << name << "." << std::endl
              << "Person is  " << age << " years old." << std::endl
              << "Person's weight is " << weight << "." << std::endl
              << "The person earns " << salary << " dollars." << std::endl
              << "---------------------------------------------------------" << std::endl;
}

// End Printer Functions