#include <iostream>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"

const int num_obj = 7;
int main()
{
    Area *list[num_obj];   // Creating an array of area pointers.
    int index = 0;         // Initializing the index
    double sum_area = 0.0; // Initializing the sum area
    cout << "Creating Ring: ";
    Ring blue_ring("BLUE", 5, 2); // Constructing a ring object
    cout << "Creating Circle: ";
    Circle yellow_circle("YELLOW", 7);
    cout << "Creating Rectangle: ";
    Rectangle green_rectangle("GREEN", 5, 6);
    cout << "Creating Circle: ";
    Circle red_circle("RED", 8);
    cout << "Creating Rectangle: ";
    Rectangle black_rectangle("BLACK", 10, 20);
    cout << "Creating Ring: ";
    Ring violet_ring("VIOLET", 100, 5);
    cout << "Creating Square: ";
    Square  yellow_square("YELLOW", 69);
    list[0] = &blue_ring; // Setting the pointer at list[0] to point at blue_ring
    list[1] = &yellow_circle;
    list[2] = &green_rectangle;
    list[3] = &red_circle;
    list[4] = &black_rectangle;
    list[5] = &violet_ring;
    list[6] = &yellow_square;
    while (index < num_obj)
    { // Loop to go through all the objects in the array
        (list[index])->getColor();
        double area = list[index++]->calcArea(); // Calling the calc area for each element in the object.
        sum_area += area;
    }
    /*  Additional Comments:
        This works because we are setting the pointer of the list as the parent class and then using a
        virtual area function in the parent class. The Basic concepts of polymorphism.
    */
    cout << "\nThe total area is "
         << sum_area << " units " << endl; // Prints the total area of all the shapes in the array.
    return 0;
}

// Diagram:
/*

            Area
              |
       _______|_______
       |             |
     Circle      Rectangle
       |
      Ring

*/