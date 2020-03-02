/*
CH-230-A
a10 p8.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <iostream>
#include <cstring> // standard C string.h header file

using namespace std;
//Provided class
class NaiveString
{
private:
    char *str;

public:
    NaiveString(); //Good programming practice :D
    NaiveString(const char *);
    NaiveString(const NaiveString &);
    void update(char, char);
    void print();
};

NaiveString::NaiveString()
{
    cout << "Empty constructor" << endl;
    const char *a = "You did not enter anything :(";
    str = new char[strlen(a) + 1];
    strcpy(str, a);
}

//Provided constructor
NaiveString::NaiveString(const char *t)
{
    cout << "Normal constructor with a const char * as parameter" << endl;
    str = new char[strlen(t) + 1];
    strcpy(str, t);
}
//Provided copy constructor
NaiveString::NaiveString(const NaiveString &src)
{
    cout << "Copy constructor with a NaiveString instance passed by reference" << endl;
    str = new char[strlen(src.str) + 1];
    strcpy(str, src.str);
}

/* replaces occurrences of oldchar by newchar */
void NaiveString::update(char oldchar, char newchar)
{
    unsigned int i;
    for (i = 0; i < strlen(str); i++)
        if (str[i] == oldchar)
            str[i] = newchar;
}

void NaiveString::print()
{
    cout << str << endl;
}

void funcByVal(NaiveString s)
{
    cout << "funcByVal() being called" << endl;
    s.update('B', 'C');
    s.print();
}

void funcByRef(NaiveString &s)
{
    cout << "funcByRef() being called" << endl;
    s.update('B', 'C');
}

int main(int argc, char **argv)
{
    NaiveString a("aBcBdB"); //Construction of first string
    NaiveString b("HBeHBeHBe"); //Construction of second string
    a.print(); // Before
    cout << "About to call funcByVal()" << endl;
    funcByVal(a); //Prints a modified
    a.print(); //Prints a unmodified because it was not called by reference.
    cout << "About to call funcByRef()" << endl;
    b.print(); //Before
    funcByRef(b);
    b.print(); //After. This time b is modified because it was called by reference.
    return 0;
}