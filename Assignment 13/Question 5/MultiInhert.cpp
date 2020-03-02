/*
CH-230-A
a13 p1.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <iostream>
using namespace std;

class A
{
private:
    int x;

public:
    // A() {x = 0;} // Empty constructor for A was not given
    A(int i) { x = i; }
    void print() { cout << x << endl; }
};

class B : virtual public A
{
public:
    B() : A(10) {}
};

class C : virtual public A
{
public:
    C() : A(10) {}
};

class D : public B, public C
{
public: // Protection level of constructor of D was not defined. 
    D() : A(5), B(), C(){} // Empty constructor of D was not defined.
};

int main()
{
    D d;
    d.print();
    return 0;
}