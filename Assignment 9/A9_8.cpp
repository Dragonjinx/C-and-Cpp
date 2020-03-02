/*
CH-230-A
a9 p8.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <iostream>

void swapping(int &a, int &b);
void swapping(float &a, float &b);
void swapping(const char *&a,const char *&b);
void cppstring(std::string a, std::string b);

int main(void)
{
    int a = 7, b = 15;
    float x = 3.5, y = 9.2;
    const char *str1 = "One"; //This does not mean that the pointer is constant, rather I cannot make any chages to value from pointer.
    const char *str2 = "Two";
    std::string string = "Hello";
    std::string string2 = "World";
    std::cout << "a=" << a << ", b=" << b << std::endl;
    std::cout << "x=" << x << ", y=" << y << std::endl;
    std::cout << "str1=" << str1 << ", str2=" << str2 << std::endl;
    swapping(a, b);
    swapping(x, y);
    swapping(str1, str2);
    std::cout << "a=" << a << ", b=" << b << std::endl;
    std::cout << "x=" << x << ", y=" << y << std::endl;
    std::cout << "str1=" << str1 << ", str2=" << str2 << std::endl;
    return 0;
}

void swapping(int &a, int &b)
{
    int inter;
    inter = a;
    a = b;
    b = inter;
}

void swapping(float &a, float &b)
{
    float inter;
    inter = a;
    a = b;
    b = inter;
}

void swapping(const char * &a, const char * &b)
{
    const char *inter;
    inter = a;
    a = b;
    b = inter;
    //std::cout << &a << std::endl;
}

// void cppstring(std::string* &a, std::string* &b)
// {
//     std::string* inter;
//     inter = a;
//     a = b;
//     b = inter;
// }