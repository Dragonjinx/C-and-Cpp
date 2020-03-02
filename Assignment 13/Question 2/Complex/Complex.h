/*
CH-230-A
a13 p2.c
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
    Complex operator+(const Complex& toAdd);
    //Substracts the class that was passed from the class used to call the function.
    Complex operator-(const Complex& toSubstract);
    //Multiplies the class that was used to call the function with the clas that was passed into it.
    Complex operator*(const Complex& toMultiply);
    //Overloading the assignment operator for complex class
    void operator=(const Complex& toEquals);
    //Overloading Output operator
    friend std::ofstream& operator<<(std::ofstream& out, const Complex&  toPrint);
    //Overloading Input operator
    friend std::ifstream& operator>>(std::ifstream& in, Complex& toprint);
    //Overloading output operator for output stream
    friend std::ostream& operator<<(std::ostream& out, const Complex&  toPrint);
};
