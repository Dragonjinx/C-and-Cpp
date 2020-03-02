/*
CH-230-A
a9 p4.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <iostream>
#include <cstring>

void mycount(int a, int b);
void mycount(char a, std::string d);

int main(void)
{
    int a;
    int b;
    char c;
    std::string d;

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cin.ignore();
    std::getline(std::cin, d);

    mycount(a, b);
    mycount(c, d);

    return 0;
}

void mycount(int a, int b)
{
    std::cout << "When passing ints: " << b - a << std::endl;
}

void mycount(char a, std::string b)
{
    int n = 0;
    for (unsigned int i = 0; i < b.size(); i++)
    {
        if (a == b[i])
        {
            n++;
        }
    }
    std::cout << "When passing strings" << std::endl;
    std::cout << "The character " << a << " occoured " << n << " times." << std::endl;
}
