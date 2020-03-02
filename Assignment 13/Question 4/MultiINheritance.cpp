/*
CH-230-A
a13 p1.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include<iostream>
using namespace std;
 
class A
{
private: // The x was not set as any data type
  int x;
public:
  void setX(int i) {x = i;}
  void print() { cout << x << endl; }
};
 
class B:  virtual public A // Setting the base class as virtual for unambigiousness
{
public:
  B() { setX(10); }
};
 
class C: virtual public A  // Setting the base class as virtual for unambigiousness
{
public:
  C()  { setX(20); }
};
 
class D: public B, public C {
};

/*  First the constructor for b is call ed and then constructor for c is called. Since the base class for both of them is set as virtual,
    the value 'x' is the same for both of them. Thus when the constructor of B is called, x is set as 10 and then wehn the constructor of C
    is called, x is set as 20. When we call the pint function, the value of x will be printed as 20. Unline using virtual functions for runtime
    protection, this method uses virtual base class to remove the difference in the derived class so that there are no conflicting variables*/ 
int main()
{
    D d;
    d.print();
    return 0;
}