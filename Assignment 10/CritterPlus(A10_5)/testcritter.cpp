/*
CH-230-A
a10 p1.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/
#include <iostream>
#include <cstdlib>
#include "Critter.h"


int main(int argc, char **argv)
{
    Critter a;
    Critter b("Ant");
    Critter c("Wasp", 1, 0, 6);
    Critter d("Bee", 5, 0, 5);

    Critter list[4] = {a, b, c, d};

    for (int i = 0; i < 4; i++)
    {
        list[i].setHunger(2);
    }

    for (int i =  0; i < 4; i++)
    {
        std::cout << "Critter" << i +1 << std::endl << "You have created:" << std::endl;
        list[i].print();
    }
    return 0;
}
