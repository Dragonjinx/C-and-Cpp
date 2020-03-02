/*
CH-230-A
a10 p4.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <iostream>
#include "Person.h"

//Function to set the name
void Person::setName(std::string &newName)
{
    name = newName;
}

//Function to set the age
void Person::setAge(int newAge)
{
    age = newAge;
}

//Function to set the weight
void Person::setWeight(float newWeight)
{
    weight = newWeight;
}

//Function to set the salary
void Person::setSalary(double newSalary)
{
    salary = newSalary;
}

//Function to get the name
std::string Person::getName()
{
    return name;
}

//Function to get the age
int Person::getAge()
{
    return age;
}

//Function to get the weight
float Person::getWeight()
{
    return weight;
}

//Function to get the salary
double Person::getSalary()
{
    return salary;
}

void Person::print()
{
    std::cout   << "The name of the person is " << name << "."
                << " Person is  " << age << " years old."
                << " Person's weight is " << weight << "."
                << " The person earns " << salary << " dollars."
                << std::endl;

}