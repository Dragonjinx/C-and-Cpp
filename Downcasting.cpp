Can I write a constructor such that:

class Triangle : public RegularPolygon
{
private:
    double sideA;
    double sideB;
    double sideC;

public:
    Triangle();
    Triangle(std::string &, double, double, double, double, double);
    Triangle(const Triangle&);
    Triangle(const RegularPolygon&, double = 0, double = 0, double = 0);
};

Triangle::Triangle(const RegularPolygon &oldTriangle, double side1, double side2, double side3) :\
RegularPolygon(oldTriangle)
{
    sideA = side1;
    sideB = side2;
    sideC = side3;
}

// Operator overloading can also be used to downcast.
