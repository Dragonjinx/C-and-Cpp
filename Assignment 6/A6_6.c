/*
CH-230-A
a6 p6.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <stdio.h>

int main()
{
    unsigned char a;
    scanf("%c", &a);
    //Modification of the previous solution but now to include all 8 bits
    printf("The decimal representation is: %d\n", a);
    printf("The backwards binary representation is: ");
    for(int i = 7; i >= 0; i--)
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
    
    return 0;
}