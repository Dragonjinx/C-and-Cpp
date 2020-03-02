/*
CH-230-A
a11 p1.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <iostream>
#include "Box.h"

double CalcVol(const Box &);

int main()
{
    Box *Array; // Array of boxes
    int n;      // User input number of boxes

    std::cout << "Number of boxes in the array = ";
    std::cin >> n;
    std::cin.ignore(); // to Ignore the /n

    Array = new Box[2 * n];
    for (int i = 0; i < n; i++)
    {
        int CpyLocation = n + i;
     
        std::cout << "Enter the parameters for box " << i + 1 << ": " << std::endl;

        double temp = 0; // Temporary storage
        // Height Section
        std::cout << "Height = ";
        std::cin >> temp;
        std::cin.ignore();
        Array[i].setX(temp);

        // Wifth Section
        std::cout << "Width = ";
        std::cin >> temp;
        std::cin.ignore();
        Array[i].setY(temp);

        // Depth Section
        std::cout << "Depth = ";
        std::cin >> temp;
        std::cin.ignore();
        Array[i].setZ(temp);

        Array[CpyLocation] = Box(Array[i]);
    }

    for (int i = 0; i < 2 * n; i++)
    {
        std::cout << "The volume of box " << i + 1 << " is: " << CalcVol(Array[i])
                  << std::endl;
    }
    return 0;
}

double CalcVol(const Box &PassedBox)
{
    double volume;
    volume = PassedBox.getX() * PassedBox.getY() * PassedBox.getZ();
    return volume;
}