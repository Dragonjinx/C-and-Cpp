/*
CH-230-A
a9 p2.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/
#include <iostream>

int main(void)
{
    int n;
    double x;
    std::string s;
    
    std::cin >> n;
    std::cin >> x;
    std::cin >> s;

    for(int i = 0; i < n; i++)
    {
        std::cout << s << ": "  << x << std::endl;
    }
    return 0;
}