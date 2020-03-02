/*
CH-230-A
a9 p5.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <iostream>
#include <cstring>

int main(void)
{
    std::string s;
    std::string final; //="\0"
    bool a = true;
    while(a == true)
    {
        std::getline(std::cin, s);
        if(s == "quit")
        {
            a = false;
            continue;
        }
        final += s;
    }
    std::cout << "final String:" << std::endl;
    std::cout << final << std::endl;
}