/*
CH-230-A
a12 p1.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <string>

/*  Base Class
    Constructor Call:
    (Name)
*/
class Shape
{
private:
    //Every shape has a Name
    std::string name;

public:
    // builds a shape with a nam
    Shape(const std::string &);
    // empty shape
    Shape();
    // copy constructor
    Shape(const Shape &);
    // Destructor for Shape
    ~Shape();
    //Setter Function for Name
    void setName(const std::string &newName);
    //getter function for the Name
    std::string getName() const;
    // prints the name of the shape
    void printName() const;
};

/*  A shape with centeres given.
    Constructor call:
    (Name, Center X, Center Y)
*/
class CenteredShape : public Shape
{
private:
    // Coordinates for the center of the shape (x, y)
    double x, y;

public:
    // Empty constructor for CenteredShape
    CenteredShape();
    // Constructor for the CenteredShape class (Name, Center X, Center Y)
    CenteredShape(const std::string &, double, double);
    // Copyconstructor for the CenteredShape class
    CenteredShape(const CenteredShape &);
    // Destructor for Centeredshape
    ~CenteredShape();
    // moves the shape, i.e. it modifies it center
    void move(double X, double Y);
    // Setter for X Coordinate of center
    void setX(const double X);
    // Setter fot Y Coordinate of center
    void setY(const double Y);
    // Getter for X Coordinate of center
    double getX() const;
    // Getter for Y Coordinate of center
    double getY() const;
};

/*  A centered shape with number of edges defined.
    Constructor call:
    (Name, Center X, Center Y, Number of edges)
*/
class RegularPolygon : public CenteredShape
{
private:
    // Number of edges of a regular polygon
    int EdgesNumber;

public:
    // Constructor for the RegularPolygon class (Name, Center X, Center Y, NumberofEdges)
    RegularPolygon(const std::string &, double, double, int);
    // Empty constructor for RegularPolygon class
    RegularPolygon();
    // Copyconstrucotr for RegularPolygon class
    RegularPolygon(const RegularPolygon &);
    // Destructor for RegularPolygon
    ~RegularPolygon();
    // Setter method for EdgeNumber
    void setEdge(const int newEdge);
    //Getter method for EdgeNumber
    int getEdge() const;
};

/*  A Centered shape with a fixed radius
    Constructor call:
    (Name, Center X, Center Y, Radius)
*/
class Circle : public CenteredShape
{
private:
    // Radius of the circle
    double Radius;

public:
    // Constructs Circle (Name, Cneter X, Center Y, Radius)
    Circle(const std::string &, double, double, double);
    // Empty constructor for circle
    Circle();
    // Copy constructor for circle
    Circle(const Circle &);
    // Destructor for Circle
    ~Circle();
    // Setter method for the radius
    void setRadius(const double newRadius);
    // Getter method for the radius
    double getRadius() const;
    /* Usability Functions */
    // Gives the perimier of a circle
    double perimeter() const;
    // Gives the area of a circle
    double area() const;
};

/*  A Regular polygon with 4 edges and 2 unique side lengths
    Constructor call:
    (Name, Center X, Center Y, Width, Height)
*/
class Rectangle : public RegularPolygon
{
private:
    double width;  // The Length of the Rectangle
    double height; // The Height of the Rectangle

public:
    // Empty constructor for Rectangle
    Rectangle();
    // Constructs Rectangle (Name, Center X, Center Y, Width, Height)
    Rectangle(const std::string &, double, double, double, double);
    // Copy Constructor for Rectangle
    Rectangle(const Rectangle &);
    // Destructor for Rectangle
    ~Rectangle();
    // Setter method for the width of the Rectangle class
    void setWidth(const double newWidth);
    // Setter method for the height of the Rectangle class
    void setHeight(const double newHeight);
    // Getter method for the width of the Rectangle class
    double getWidth() const;
    // Getter method for the height of the Rectangle class
    double getHeight() const;
    /* Usability Functions */
    // Gives the peremiter of the rectangle
    double perimeter() const;
    // Gives the area of the rectangle
    double area() const;
};

/*  A Regular polygon with 4 edges and all sides equal
    Constructot call:
    (Name, Center X, Center Y, Side length)
*/
class Square : public RegularPolygon
{
private:
    // All sides of square are equal
    double SideLength;

public:
    //Empty constructor for square
    Square();
    // Constructs Square (Name, Center X, Center Y, Sidelength)
    Square(const std::string &, double, double, double);
    // Copy constructor for square
    Square(const Square &);
    // Destructor for Square
    ~Square();
    // Setter method for the SideLength of the Square class
    void setSide(const double newSide);
    // Getter method for the SideLength of the Square class
    double getSide() const;
    /* Usability Functions */
    // Gives the perimeter of the square
    double perimeter() const;
    // Gives the area of the square
    double area() const;
};

/*  A Regular polygon with 6 edges and all sides equal
    Also Has Color
    Constructor call:
    (Name, Center X, Center Y, Side, Color)
*/
class Hexagon : public RegularPolygon
{
private:
    double side;
    std::string color;

public:
    // Empty constructor for hexagon
    Hexagon();
    // Constructs Hexagon (Name, Center X, Center Y, Side, Color)
    Hexagon(const std::string &, double, double, double, const std::string &);
    // Copy constructor for hexagon
    Hexagon(const Hexagon &);
    // Destructor for hexagon
    ~Hexagon();
    // Setter method for the side length of the hexagon class
    void setSide(const double side);
    // Setter method for the color of the hexagon
    void setColor(const std::string &color);
    // Getter method for the side length of the hexagon class
    double getSide() const;
    // Getter method for the color of the hexagon class
    std::string getColor() const;
    /*  Usability Functions */
    // Returns the perimeter of the hexagon
    double perimeter() const;
    // Returns the area of the hexagon
    double area() const;
};


// Begin Setter Functions

inline void Shape::setName(const std::string &newName)
{
    name = newName;
}

inline void CenteredShape::setX(const double X)
{
    x = X;
}

inline void CenteredShape::setY(const double Y)
{
    y = y;
}

inline void RegularPolygon::setEdge(const int newEdge)
{
    EdgesNumber = newEdge;
}

inline void Circle::setRadius(const double newRadius)
{
    Radius = newRadius;
}

inline void Rectangle::setWidth(const double newWidth)
{
    width = newWidth;
}

inline void Rectangle::setHeight(const double newHeight)
{
    height = newHeight;
}

inline void Square::setSide(const double newSide)
{
    SideLength = newSide;
}

inline void Hexagon::setSide(const double side)
{
    this->side = side;
}

inline void Hexagon::setColor(const std::string &color)
{
    this->color = color;
}

// End Setter Function

// Begin Getter Functions

inline std::string Shape::getName() const
{
    return name;
}

inline double CenteredShape::getX() const
{
    return x;
}

inline double CenteredShape::getY() const
{
    return y;
}

inline int RegularPolygon::getEdge() const
{
    return EdgesNumber;
}

inline double Circle::getRadius() const
{
    return Radius;
}

inline double Rectangle::getWidth() const
{
    return width;
}

inline double Rectangle::getHeight() const
{
    return height;
}

inline double Square::getSide() const
{
    return SideLength;
}

inline double Hexagon::getSide() const
{
    return side;
}

inline std::string Hexagon::getColor() const
{
    return color;
}

// End Getter Functions