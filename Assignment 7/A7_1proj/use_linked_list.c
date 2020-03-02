/*
CH-230-A
a7 p1.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <stdio.h> 
#include <math.h>
#include <stdlib.h>
#include "linked_list.h"

#ifndef ALREADYCALLED
struct list 
{
    int elem;
    struct list *nxtelm;
};
#endif

int main()
{
    char c;
    //Declating the list type.
    int num;
    
    
    struct list *misery = NULL;
    //struct list *remainder= misery; //To remind me where misery starts from.
    do
    {
        scanf("%c", &c);
        switch (c)
        {
            case 97: //a (Adds to the end of the list)
            scanf("%d", &num);
            getchar();
            misery = addbehind(misery, num);
            break;

            case 98: //b (Adds to the begenning of the list)
            scanf("%d", &num);
            getchar();
            misery = addinfront(misery, num);
            break;

            case 114: //r (Removes the first element)
            misery = removefirst(misery);
            break;

            case 112: //p
            printerlist(misery);
            break;

            case 113: //q
            YEET(misery); //Yay!
            break;
        }
    }
    while ( c != 113);
    return 0;
}