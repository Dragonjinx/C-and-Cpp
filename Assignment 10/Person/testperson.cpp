/*
CH-230-A
a10 p4.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <iostream>
#include "Person.h"

int main()
{
    Person A;
    Person B;
    Person C;

    Person list[3] = {A, B, C};

    std::string Name;
    int Age;
    float Weight;
    double Salary;

    for (int i = 0; i < 3; i++)
    {
        std::cout << "Enter the parameters for person " << i + 1 << ":" << std::endl;
        std::cout << "Name: ";
        std::getline(std::cin, Name);
        std::cout << "Age: ";
        std::cin >> Age;
        std::cin.ignore();
        std::cout << "Weight: ";
        std::cin >> Weight;
        std::cout << "Salary: ";
        std::cin >> Salary;
        std::cin.ignore();

        list[i].setName(Name);
        list[i].setAge(Age);
        list[i].setWeight(Weight);
        list[i].setSalary(Salary);
    }

    for (int i = 0; i < 3; i ++)
    {
        std::cout << "Person " << i + 1 << ": " << std::endl;
        list[i] .print();

    }
    return 0;
}