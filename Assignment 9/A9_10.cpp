/*
CH-230-A
a9 p10.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

int main(void)
{
    std::string initial[] = {"computer", "television", "keyboard", "laptop", "mouse",
                             "eminem", "chester bennington", "mike shinoda", "jayz",
                             "pentakill", "azir", "shurima", "aurelion smol",
                             "apostle", "priest", "assassin's creed", "ezio auditore da firenze"};

    srand(static_cast<unsigned int>(time(0))); // Setting the seed for the random generator.
    std::string input;
    // std::string array[17] = initial[17];

    // Loop to modify the words.
    // for(int i = 0; i < 17; i++)
    // {
    //     int j = 0;
    //     while(array[i][j] != '\0')
    //     {
    //         if (array[i][j] == 'A' || array[i][j] == 'E' || array[i][j] == 'I' || array[i][j] == 'O' || array[i][j] == 'U' ||
    //             array[i][j] == 'array' || array[i][j] == 'e' || array[i][j] == 'i' || array[i][j] == 'o' || array[i][j] == 'u')
    //         {
    //             array[i][j] = '_';
    //         }
    //     }
    // }
    //I CAN JUST TAKE THE RANDOM WORD AND MODIFY IT WHY TF AM I DOING IT FOR THE ENTIRE ARRAY : ^)
    // Main execution loop:
    // Loop takes random element for each execution but not for each guess by the user.
    while (1)
    {
        int random = rand();
        int position = random % 17;
        int i = 0;
        int counter = 0;
        std::string selection = initial[position];   //The sring I am going to display
        std::string comparision = initial[position]; //The string for comparision
        // Loop for modification:
        while (selection[i] != '\0')
        {
            if (selection[i] == 'A' || selection[i] == 'E' || selection[i] == 'I' || selection[i] == 'O' || selection[i] == 'U' ||
                selection[i] == 'a' || selection[i] == 'e' || selection[i] == 'i' || selection[i] == 'o' || selection[i] == 'u')
            {
                selection[i] = '_';
            }
            i++;
        }
        // Loop for comparision with original
        while (input != comparision)
        {
            std::cout << selection << std::endl
                      << "Enter your guess:" << std::endl;
            std::getline(std::cin, input);
            if (input == "quit")
            {
                std::cout << "Better luck next time! :D" << std::endl;
                return 0;
            }
            counter++;
        }
        std::cout << "Congratulations you succeded after " << counter << " tries!" << std::endl;
        std::cout << "Do you want to continue? (Y / N)" << std::endl;
        char contin;
        std::cin >> contin;
        std::cin.ignore();
        if (contin == 'N' || contin == 'n')
        {
            return 0;
        }
    }
}