/*
CH-230-A
a6 p8.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>


struct list 
{
    int elem;
    struct list *nxtelm;
};
//NOTE TO SELF: DON'T LET YOUR LAZY ASS USE VOID FUNCTIONS WHEN MODIFYING STRUCTS. : ^)
void printerlist(struct list *a);
struct list* addbehind(struct list *a, int b);
struct list* addinfront(struct list *a, int b);
struct list* removefirst(struct list *a);
void YEET(struct list *a);
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

struct list* addinfront(struct list *a, int b)
{
    struct list *frntelem; //Pointer for the next element
    frntelem = (struct list *) malloc(sizeof(struct list));
    if (frntelem == NULL)
    {
        exit(1);
    }
    frntelem->elem = b;
    frntelem->nxtelm = a;
    return frntelem;
}

struct list* addbehind(struct list *a, int b)
{
    struct list *backthingy; //Pointer to the next struct.
    struct list *thisthingy; //Storage for a.
    thisthingy = a;
    backthingy = (struct list *) malloc(sizeof(struct list)); //Allocating memory for the list element
    if (backthingy == NULL)
    {
        return a;  
    }
    backthingy->elem = b;
    backthingy->nxtelm = NULL;
    //I have stored the value in a list so now I need to append it to the end of the list.
    if (a == NULL)
    {
        return backthingy;
    }
    while (thisthingy->nxtelm != NULL)
    {
        thisthingy = thisthingy->nxtelm;
    }
    thisthingy->nxtelm = backthingy;
    //I modify the address stored in the last position of a (which was NULL) to "backthingy" making "backthingy" the new last element of the list. 
    return a;
}

struct list* removefirst(struct list *a)
{
    if (a == NULL) //If the given list is empty, why try to remove it?
    {
        return a;
    }
    struct list *NEWBEGENNING;
    NEWBEGENNING = a->nxtelm;
    free(a);
    return NEWBEGENNING;
}

void printerlist(struct list *a)
{
    struct list *IEMPRINTER;
    for(IEMPRINTER = a; IEMPRINTER; IEMPRINTER = IEMPRINTER->nxtelm)
    //Start from a, use its pointer as your next list. The mid statement is the asme as saying IEMPRINTER != NULL.
    {
        printf("%d ", IEMPRINTER->elem);
    }   
    printf("\n");
}

void YEET(struct list *a)
{
    struct list *URNEXT;
    while(a != NULL)
    {
        URNEXT = a->nxtelm;
        free(a);
        a = URNEXT;
    }
}