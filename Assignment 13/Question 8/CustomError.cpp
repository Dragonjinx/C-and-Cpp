/*
CH-230-A
a13 p8.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <iostream>


/*  Creating custom exception class as instructed in:
    https://peterforgacs.github.io/2017/06/25/Custom-C-Exceptions-For-Beginners/
*/
class OwnException : public std::exception
{
public:
    const char * what() const throw()
    {
        return "Default Case Exception";
    }
};

void specialFunction(int a)
{
    switch(a)
    {
        case 1:
        throw 'a';
        break;

        case 2:
        throw 12;
        break;

        case 3:
        throw true;
        break;

        default:
        throw OwnException();
        // It gave errors without the paranthesis but I don't know why
    }
}
int main()
{
    int num;
    std::cout << "Enter your number for function: " << std::endl;
    std::cin >> num;
    try
    {
        specialFunction(num); 
    }
    /*  Writing catch for multiple exceptions as shown in:
        https://www.geeksforgeeks.org/exception-handling-c/
    */
    catch(char excep)
    {
        std::cerr << "Caught in main: " << excep << '\n';
    }
    catch(int excep)
    {
        std::cerr << "Caught in main: " << excep << '\n';
    }
    catch(bool excep)
    {
        std::cerr << "Caught in main: " << excep << '\n';
    }
    catch(const OwnException& excep)
    {
        std::cerr << "Caught in main: " << excep.what() << '\n';
    }
    return 0;
}