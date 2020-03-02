/*
CH-230-A
a6 p7.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <stdio.h>
#include <math.h>

void set3bits(unsigned char *a, int b, int c, int d); //Function to pass by reference the value of a and then set the appropriate bis

int main()
{
    unsigned char c;
    int  x;
    int  y;
    int  z;

    scanf("%c", &c);
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    printf("The decimal representation is: %d\n", c);
    printf("The binary representation is: ");
    for(int i = 7; i >= 0; i--)
    {
        unsigned int bit = c;
        bit = bit >> i;
        if(bit & 1)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
    printf("\n");
    set3bits(&c, x, y, z);
    printf("After setting the bits: ");
    for(int i = 7; i >= 0; i--)
    {
        unsigned int bit = c;
        bit = bit >> i;
        if(bit & 1)
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

void set3bits(unsigned char *a, int b, int c, int d)
{
    int bitmask = pow(2, b) + pow(2, c) + pow(2, d); //N th power of 2 represents the bit in the N + 1 position
    *a = *a | bitmask;
}
