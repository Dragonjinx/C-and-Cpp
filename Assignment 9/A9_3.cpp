/*
CH-230-A
a9 p3.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <iostream>

int main(void)
{
    int x;
    std::cin >> x;
    if (x < 0)
    {
        std::cout << -x << std::endl;
        return 0;
    }
    std::cout << x << std::endl;
    return 0;
}