/*
CH-230-A
a9 p6.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

int main(void)
{
    int result; //Output reasult
    int difficulty; //How manu times is someone allowed to guess
    int dice; //number of faces of the dice
    int counter = 0; //How many times die was rolled
    int random; //Storage for random number
    int guess; //User's Guess

    std::cout << "Enter the number of faces of your dice:" << std::endl;
    std::cin >> dice;
    std::cout << "Set the maximum number of guesses:" << std::endl;
    std::cin >> difficulty;
    if(difficulty < 1)
    {
        while(difficulty < 1)
        std::cout << "Number of guesses must be at least 1. Try again:" << std::endl;
        std::cin >> difficulty;
    }

    //Setting the seed for the random number generator as the time of execution
    //Output of time is casated into an unsigned int.
    srand(static_cast<unsigned int>((time(0))));

    while(counter < difficulty)
    {
        counter++;
        random = rand();
        result = (random % dice) + 1;
        std::cout << "Enter your guess:" << std::endl;
        std::cin >> guess;
        if(guess == result)
        {
            std::cout << "Congratulations you guessed right in" << counter << "tries." << std::endl;
            break;
        }
        else
        {
            std::cout << "Wrond guess. You have " << difficulty - counter << " tries remaining." << std::endl;
        }        
    }
    return 0;
}