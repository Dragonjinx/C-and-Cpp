#include <iostream>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"

const int num_obj = 7;
int ReturnRandom(int index);

int main()
{
    srand(static_cast<unsigned int>(time(0)));
    Area *list[num_obj];   // Creating an array of area pointers.
    int index = 0;         // Initializing the index
    double sum_area = 0.0; // Initializing the sum area
    const char * array[4] = {"RED", "BLACK", "VOILET", "BLUE"};

    // Index for objects: (Circle(0), Rectangle(1), Ring(2), Square(3))
    for(int i = 0; i < num_obj; i++)
    {
        int ourCase = ReturnRandom(4);
        int color = ReturnRandom(4);
        double size = (ReturnRandom(95) + 5);
        double size2 = (ReturnRandom(95) + 5);
        std::cout << "Random Roll:" << ourCase << " " << color << " " << size << " " << size2 << std::endl; 
        switch (ourCase)
        {
        case 0:
            list[i] = new Circle(array[color], size);
            break;
        
        case 1:
            list[i] = new Rectangle(array[color], size, size2);
            break;
        
        case 2:
            list[i] = new Ring(array[color], size, size2);
            break;
        
        case 3:
            list[i] = new Square(array[color], size);
            break;
        
        default:
            list[i] = new Square("Error Square", 0);
            break;
        }    
    }

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

int ReturnRandom(int index)
{
    int randomNumber = rand();
    int die = (randomNumber % index);
    return die;
}