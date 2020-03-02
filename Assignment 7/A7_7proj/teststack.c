/*
CH-230-A
a7 p7.c
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
    char cond;
    do
    {
        scanf("%c", &cond);
        switch (cond)
        {
            case 's':
                scanf("%d", &elem);
                getchar();
                STAKK = push(STAKK, elem);
            break;

            case 'p':
                STAKK = pop(STAKK);
            break;
            case 'e':

                STAKK = empty(STAKK);
            break;

            case 'q':
                printf("Quit\n");
                exit(1);
            break;
        }
    } while (cond != 'q');
    return 0;
}
