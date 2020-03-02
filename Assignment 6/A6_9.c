/*
CH-230-A
a6 p9.c (Nice)
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
void printerlist(struct list *a);
struct list* addbehind(struct list *a, int b); //Adds element behind
struct list* addinfront(struct list *a, int b); //Adds element infront
struct list* removefirst(struct list *a); //Removes the first element
struct list* InDaMiddle(struct list *a, int b, int c); //Adds element c in the b position
struct list* happiness(struct list *a); //Opposite of misery {Not really :) }
void YEET(struct list *a);
int main()
{
    char c;
    //Declating the list type.
    int num;
    int pos;
    
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

            case 105: //Inserts value after the Nth position
            scanf("%d", &pos);
            scanf("%d", &num);
            getchar();
            misery = InDaMiddle(misery, num, pos);
            break;

            case 114: //r (Removes the first element)
            misery = removefirst(misery);
            break;

            case 82: //R reverses the list
            misery = happiness(misery);
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

struct list* InDaMiddle(struct list *a, int b, int c)
{
    struct list *RAINDROPSS; //For current element
    struct list *PUDDLE; //For next element
    //I checked for proper a
    RAINDROPSS = NULL; 
    PUDDLE = NULL;
    RAINDROPSS = a;
    for(int i = 0; i < b; i++)
    {
        RAINDROPSS = RAINDROPSS->nxtelm;
        PUDDLE = RAINDROPSS->nxtelm;
    }
    if(PUDDLE == NULL) //Checking if I went beyond what my list has
    {
        printf("Invalid Position\n");
        return a;
    }
    struct list *MyHead = (struct list *) malloc(sizeof(struct list));
    if(MyHead == NULL)
    {
        exit(1);
    }
    //Before => Raindrops -> Puddle
    MyHead->elem = b;
    MyHead->nxtelm = PUDDLE;

    RAINDROPSS->nxtelm = MyHead;
    //After => Raindrops -> MyHead -> Puddle
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

struct list* happiness(struct list*a)
{
    struct list *PreviousBoi; //Previous Element
    struct list *DisBoi;    //Current element
    struct list *NextBoi; //Next element
    //Now that I have checked the allocations, I set them as NUll pointers so that my function don't get FUNKY
    PreviousBoi = NULL;
    NextBoi = NULL;

    for (DisBoi = a; DisBoi;) //I have exit clause inside the loop
    {
        NextBoi = DisBoi->nxtelm;
        DisBoi->nxtelm = PreviousBoi;

        PreviousBoi = DisBoi;
        DisBoi = NextBoi;
    }
    //Here com dai boi Honk Honk
    return PreviousBoi;
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