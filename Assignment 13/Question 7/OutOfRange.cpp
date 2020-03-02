/*
CH-230-A
a13 p7.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> Eight20Times (20,8);
    
    try
    {
        Eight20Times.at(21);
    }
    catch(const std::out_of_range& e)
    /*  It is specified in the webpage:
        http://www.cplusplus.com/reference/vector/vector/at/
        that an out_of_range exception is thrown by the method by default.

        The webpage:
        http://www.cplusplus.com/reference/stdexcept/out_of_range/
        specifies const std::out_of_range& as the parameter for catch.
    */
    {
        std::cerr << "Out of range error " << e.what() << '\n';
    }
    return 0;
}