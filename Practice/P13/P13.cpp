#include <stdio.h>

typedef struct coffee
{
    int id;
    char property;
}KeepsMeAlive;


/*  Strucure of property type:
    ________
    76543210

    pos | Property (1 = Y/ 0 = n)
    0 => Regular 
    1 => Expresso
    2 => Double Espresso
    3 => Millk
    4 => Cream
    5 => Soy Milk
    6 => Sugar
    7 => Sweetner

    Example:
    01001001
    Regular with milk and shugar


*/

void set_coffee_property(KeepsMeAlive* c, const unsigned char property)
{
    c->property =  c->property | property;
}

void unset_coffee_property(KeepsMeAlive *c, const unsigned char property)
{
    c->property = (c->property | property) ^ property;
}

int main()
{
    KeepsMeAlive A = {1, 0}; // Initializing a coffee
    set_coffee_property(&A, (1<<3 + 1<<6));            
    return 0;
}