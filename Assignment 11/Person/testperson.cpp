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
    Person *list = new Person[5];

    std::string Name;
    int Age;
    float Weight;
    double Salary;

    for (int i = 0; i < 2; i++)
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
        std::cout << "---------------------------------------------------------" << std::endl;

        list[i].setName(Name);
        list[i].setAge(Age);
        list[i].setWeight(Weight);
        list[i].setSalary(Salary);
    }

    Person Joe("Joe", 69, 42.0, 69.420);
    Person Putin("Vladimir Vladimirovich Putin", 67, 80, 69420);
    Person Obama("Barack Hussein Obama II", 58, 80, 42069);

    list[2] = Person(Joe);
    list[3] = Person(Putin);
    list[4] = Person(Obama);  

    for (int i = 0; i < 5; i ++)
    {
        std::cout << "Person " << i + 1 << ": " << std::endl;
        list[i] .print();

    }
    return 0;
}