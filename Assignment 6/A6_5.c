/*
CH-230-A
a6 p5.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    unsigned char a;
    scanf("%c", &a);

    printf("The decimal representation is: %d\n", a);
    int bitcount = (log(a) / log(2)) + 1; //This is because I want to print only the bits necessary.
    printf("The backwards binary representation is: ");
    for(int i = 0; i < bitcount; i++)
    {
        unsigned int b = a;
        b = b >> i;
        if(b & 1)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
    printf("\n");
    //Forgive me for being sneaky with the printf but I cannot store the values in an array.
    return 0;
}