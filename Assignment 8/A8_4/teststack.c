/*
CH-230-A
a8 p4.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/
#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main()
{
    struct stack STAKK; //Initializing the stack
    STAKK.count = 0;
    int elem;
    scanf("%d", &elem);
    STAKK = binConvert(STAKK, elem);
    printf("The binary representation of %d is ", elem);
    for(int i = STAKK.count-1; i>=0; i--)
    {
        printf("%d", STAKK.array[i]);
    }
    printf(".\n");
    return 0;
}
