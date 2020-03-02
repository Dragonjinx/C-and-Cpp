/*
CH-230-A
a12 p5.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    std::string array[4] = {"RED", "BLACK", "VOILET", "BLUE"};
    int die;
    int count = 0;
    int randomNumber;

    srand(static_cast<unsigned int>(time(0)));
    while (count < 15)
    {
        randomNumber = rand();
        die = (randomNumber % 4);
        std::cout << "Color " << count +1 << ": " << array[die] << std::endl;
        count++; 
    }
    return 0;
}