/*
CH-230-A
a10 p7.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

/*  A Vector of arbitary dimentions
    Constructor call:
    (Dimentions, Array of elements)
*/
class Vector
{
private:
    int Dimention;
    double *Array;

public:
    // Empty constructor for Vector
    Vector();
    /*  Parametric constructor for Vector
        (Dimentions, Array of elements (Def nullptr))
    */
    Vector(const int, double * = nullptr); //Some problem with const gotta ask professor
    // Copy constructor for Vector
    Vector(const Vector &);
    // Destructor for Vector
    ~Vector();
    // Setter function for Vector dimention
    void setDimention(const int newDimention);
    // Setter function for pointer to the array of elements
    void setArray(double *newArray);
    // Getter function for the Vector dimention
    int getDimention() const;
    // Getter function for the Vector array location
    double *getArray() const;

    /*  Additional Functions */

    /*  Set the values of the vector when no storage is given
        Returns the pointer to the array
    */
    double *setValues();
    /*  Set the values of the vector when the storage is given
        Returns the pointer to the array
    */
    double *setValues(double *storeLocation);
    /*  Changes the nth dimentional value of the vector as long as it is 
        less than or equal to the dimention of the vector
        Function call: (Value to add, Dimention)
        Returns 1 if successful,
        Returns -1 if input dimention is larget than Vector Dimention,
        Returns 0 if the pointer to storage is Null
    */
    int setNValue(double newValue, int valueDimention);
    /*  Returns the norm of the vector.
        Returns 0 if the Vector has no dimentions
        Returns -1 if the pointer to the storage is Null
    */
    double norm();
    /*  Returns the scalar product of two vectors
        Function call Vector.scalar(Vector)
        Returns 0 if the Vector has no dimentions
        Returns 0 with a printed message if the pointer to the storage is Null.
    */
    double scalar(const Vector&) const;
    /*  Adds the components of the given vector to the vector used to call it.
        Function call Vector.add(Vector)
    */
    Vector add(const Vector&) const;
    /*  Substracts the components of the given vector with the vector used to call it.
        Function call Vector.substract(Vector)
    */
    Vector substract(const Vector &) const;
    // Printer function for vector
    void print() const;
};