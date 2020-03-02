/*
CH-230-A
a8 p4.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stack.h"

int main()
{
    struct stack STAKK; //Initializing the stack
    STAKK.count = 0;
    char Sentence[200];
    fgets(Sentence, 200, stdin);
    Sentence[strlen(Sentence) - 1] = '\0';
    STAKK = push(STAKK, Sentence);
    printf("Stored in stack");
    char StoreInvered[200];
    Dumpstack(STAKK, StoreInvered);
    printf("Sentence after stacked:\n%s\n", StoreInvered);
    return 0;
}
