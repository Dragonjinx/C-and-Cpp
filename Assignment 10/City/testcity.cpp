/*
CH-230-A
a10 p3.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <iostream>
#include "City.h"

int main(void)
{
    City bre; //Declating bremen
    City par; //Declaring paris
    City lon; //Declaring london

    City list[3] = {bre, par, lon}; //Putthing the cities in an array for the loop

    std::string Name;  //Container for name
    long int Pop;      //Container for Population
    std::string Mayor; //Container for Mayor
    int Area;          //Container for Area.

    for (int i = 0; i < 3; i++)
    {
        std::cout << "Enter the parameters for city " << i + 1 << ":" << std::endl;
        std::cout << "Name: ";
        std::getline(std::cin, Name);
        std::cout << "Population: ";
        std::cin >> Pop;
        std::cin.ignore();
        std::cout << "Mayor: ";
        std::getline(std::cin, Mayor);
        std::cout << "Area: ";
        std::cin >> Area;
        std::cin.ignore();

        list[i].setName(Name);
        list[i].setInhab(Pop);
        list[i].setMayor(Mayor);
        list[i].setArea(Area);
    }

    for (int i = 0; i < 3; i++)
    {
        std::cout << "City " << i + 1 << ": " << std::endl;
        list[i].print();
    }
    return 0;
}