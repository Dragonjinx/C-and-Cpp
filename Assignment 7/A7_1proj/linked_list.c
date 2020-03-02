#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"


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