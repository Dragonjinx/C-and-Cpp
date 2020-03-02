/*
CH-230-A
a11 p1.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

class Box
{
private:
    double x; // Height
    double y; // Width
    double z; // Depth

public:
    // Empty constructor Sets all to 0
    Box();
    // Constructor (Height , Width (Def 1), Depth (Def 1))
    Box(const double, const double = 1, const double = 1);
    // Copy Constructor
    Box(const Box &);
    // Destr=uctor
    ~Box();
    /* Setter Functions: */
    // Sets Height
    void setX(double newX);
    // Sets Width
    void setY(double newY);
    //Sets Depth
    void setZ(double newZ);
    /* Getter Functions */
    // Returns Height
    double getX() const;
    // Returns Width
    double getY() const;
    // Returns Depth
    double getZ() const;
};