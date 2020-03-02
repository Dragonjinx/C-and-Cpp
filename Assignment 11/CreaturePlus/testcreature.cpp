/*
CH-230-A
a10 p4.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <iostream>
#include "Creature.h"

int main()
{
    std::string Input;
    while (1)
    {
        std::cout << "Which Object?\n";
        std::getline(std::cin, Input);
        
        if(Input == "wizard")
            {
            std::cout << "\nCreating a Wizard.\n";
            Wizard w;
            w.run();
            w.hover();
            }
        else if(Input == "object1")
        {
            std::cout << "\nJesus is born.\n";
            Jesus J;
            J.run();
            J.WalkOnWater();
        }

        else if(Input == "object2")
        {
            std::cout << "\n 'Murica\n";
            Eagle *A;
            A = new Eagle;
            A->run();
            A->FREEDOM();
        }

        else if(Input == "exit")
        {
            exit(0);
        }
    }
    return 0;
}