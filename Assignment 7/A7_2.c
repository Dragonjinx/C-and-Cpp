/*
CH-230-A
a7 p2.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <stdio.h>
#include <stdlib.h>

struct Dlist
{
    char elem;
    struct Dlist *frntptr;
    struct Dlist *bckptr;
};

struct Dlist *addfront(struct Dlist *a, char b); //Adds the character to the front of the list
struct Dlist *removechar(struct Dlist *a, char b); //Adds the character to the back of the list
void prntlst(struct Dlist *a); //Prints the list
void prntback(struct Dlist *a); //Prints the list in reverse
void clean(struct Dlist *a); //Frees the memory allocated for the list.

int main()
{
    int parm = 0;
    char buffer;
    struct Dlist *eminem = NULL;
    do
    {
        scanf("%d", &parm);
        getchar();
        switch (parm)
        {
        case 1:
            scanf("%c", &buffer);
            getchar();
            eminem = addfront(eminem, buffer);
            break;

        case 2:
            scanf("%c", &buffer);
            getchar();
            // printf("Case 2\n"); Debugging
            eminem = removechar(eminem, buffer);
            break;

        case 3:
            // printf("Case 3\n"); Debugging
            prntlst(eminem);
            break;

        case 4:
            prntback(eminem);
            break;

        case 5:
            clean(eminem);
            break;
        }
    } while (parm != 5);
    return 0;
}

struct Dlist *addfront(struct Dlist *a, char b)
{
    //Allocating memory for the character
    struct Dlist *stilleminem = (struct Dlist *)malloc(sizeof(struct Dlist));
    if (stilleminem == NULL)
    {
        exit(1);
    }
    //Setting the values
    stilleminem->bckptr = NULL;
    stilleminem->elem = b;
    stilleminem->frntptr = a;
    //Checking if list was initially empy
    if (a != NULL)
    {
        a->bckptr = stilleminem;
    }
    return stilleminem;
}

struct Dlist *removechar(struct Dlist *a, char b)
{
    struct Dlist *DrDre = NULL;
    struct Dlist *SlimShady = NULL;
    struct Dlist *stilleminem = NULL;
    int TimesYeeted =0;
    if(a == NULL)
    {
        return a;
    }
    SlimShady = a;
    //For all occourences of 'b' in the front
    while(SlimShady != NULL)
    {
        //If the element we want to remove is in the first position of the list
        if((SlimShady->bckptr == NULL) && (SlimShady->elem == b))
        {
            stilleminem = SlimShady->frntptr;
            free(SlimShady);
            stilleminem->bckptr = NULL;
            SlimShady = stilleminem;
            a = SlimShady;
            TimesYeeted++;
            // printf("I Yeeted da first one\n"); Debugging
        }
        else if((SlimShady->frntptr == NULL) && SlimShady->elem == b)
        //If the element is the last in the list. I got segmentation error when I didn't do this
        {
            (SlimShady->bckptr)->frntptr = NULL;
            free(SlimShady);
            SlimShady = NULL;
            TimesYeeted++;
            // printf("I yeeted da last one\n"); Debugging
        }
        else if(SlimShady->elem == b)
        //For all the occourences of the character in the middle
        {
            DrDre = SlimShady->bckptr;
            DrDre->frntptr = SlimShady->frntptr;
            stilleminem = SlimShady ->frntptr;
            stilleminem ->bckptr = SlimShady->bckptr;
            free(SlimShady);
            SlimShady = stilleminem;
            TimesYeeted++;
            // printf("I yeeted sth in da middle\n");
        }
        else
        //Moving the pointer forward. 15 mins of my life wasted cause I was dumb enought o forget this :^)
        {
            SlimShady = SlimShady->frntptr;
        }
    }
    if(TimesYeeted == 0)
    {
        // printf("The element is not in the list");
    }
    return a;
}

void prntlst(struct Dlist *a) //Works
{
    struct Dlist *IPrintDis;
    for (IPrintDis = a; IPrintDis; IPrintDis = IPrintDis->frntptr)
    {
        printf("%c ", IPrintDis->elem);
    }
    printf("\n");
}

void prntback(struct Dlist *a) //Works
{
    struct Dlist *IPrintDis = a;
    while(IPrintDis ->frntptr != NULL)
    {
        IPrintDis = IPrintDis ->frntptr;
    }
    while(IPrintDis != NULL)
    {
        printf("%c ", IPrintDis ->elem);
        IPrintDis = IPrintDis->bckptr;
    }
    printf("\n");
}

void clean(struct Dlist *a) //Works
{
    struct Dlist *YEETBOI;
    if (a->bckptr != NULL)
    {
        while (a->bckptr != NULL)
        {
            a = a->bckptr;
        }
    }
    while (a != NULL)
    {
        YEETBOI = a->frntptr;
        free(a);
        a = YEETBOI;
    }
}