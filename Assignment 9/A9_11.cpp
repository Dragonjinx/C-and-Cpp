/*
CH-230-A
a9 p11.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <iostream>
#include <cstring>

bool ispalindrome(std::string a); //Takes the string, stores half of it in a stack and then compares stack string to original
bool iseven(int a);               //Checks if number is even or not

typedef struct container //For the storage of characters with the function.
{
    int count;
    char character[30];
} Cont;

int main(void)
{
    std::string word;
    //Execution loop:
    while (word != "exit")
    {
        std::cout << "Enter your string:" << std::endl;
        std::getline(std::cin, word);

        if (ispalindrome(word) && word != "exit")
        {
            std::cout << word << " is a plaindrome." << std::endl;
        }
        else if (ispalindrome(word) == false && word != "exit")
        {
            std::cout << word << " is not a plindrome." << std::endl;
        }
    }
    return 0;
}

bool ispalindrome(std::string a)
{
    int n = a.size();
    Cont half;
    half.count = 0;
    //For the case where the string has even characters.
    if (iseven(n))
    {
        //std::cout << "Storing: "; Debugging
        for (int i = (n / 2), z = 0; i < n; i++, z++)
        {
            half.character[z] = a[i];
            //std::cout << half.character[z]; Debugging
            half.count++;
        }
        std::cout << std::endl;
    }
    //For the case where string has odd characters (character at the middle can be ignored)
    else
    {
        for (int i = ((n / 2) + 1), z = 0; i < n; i++, z++)
        {
            half.character[z] = a[i];
            //std::cout << "Storing: " << half.character[z]; Debugging
            half.count++;
        }
        std::cout << std::endl;
    }
    //Comparing the stored characters with the string
    for (int z = 0; z < half.count; z++)
    {
        if (half.character[half.count - 1 - z] == a[z])
        {
            continue;
        }
        else
        {
            return false;
        }
    }
    return true;
}

bool iseven(int a)
{
    if (a % 2 == 0)
    {
        return true;
    }
    return false;
}