/*
CH-230-A
a10 p9.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

class Complex
{
private:
    float real;      //Real part of complex number
    float imaginary; //Imaginary part of complex number

public:
    //Constructors and destructors:
    Complex();                 //Empty constructor
    Complex(float, float = 0); //Main constructor with imaginary part set to 0 as default.
    Complex(const Complex &); //Copy constructor
    ~Complex(); //Empty destructor
    //Setter methods:
    void setReal(float newReal);
    void setImaginary(float newImaginary);
    //Getter methods:
    float getReal();
    float getImaginary();
    //Usability Functions:
    //Returns the complex conjugate of the class used to cakk the function.
    Complex conjugate();
    //Returns the sum of the class the function was called through and the class that was passed into it.
    Complex complexAdder(Complex toAdd);
    //Substracts the class that was passed from the class used to call the function.
    Complex complexSubstractor(Complex toSubstract);
    //Multiplies the class that was used to call the function with the clas that was passed into it.
    Complex complexDotProduct(Complex toMultiply);
    //Printer method:
    void print();
};
