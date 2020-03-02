/*
CH-230-A
a5 p1.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/
#include <stdio.h>
#define MASKER(C) {printf("The lease significant bit is: %d\n", C & 1);}

int main()
{
    unsigned char c;
    scanf("%c", &c);

    printf("The decimal representation is: %d\n", c);   
    MASKER(c)
    return 0;
}