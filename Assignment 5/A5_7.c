/*
CH-230-A
a5 p7.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char stringa[100];
    char stringb[100];
    fgets(stringa, 100, stdin);
    strtok(stringa, "\n");
    fgets(stringb, 100, stdin);
    strtok(stringb, "\n");

    int concln = strlen(stringa) + strlen(stringb); //Giving the total length required
    char *concad = (char*) malloc(sizeof(char) * concln); //Allocating enough memory
    if (concad == NULL)
    {
        exit(1);
    }
    strcat(stringa, stringb);
    strcat(concad, stringa);
    printf("Result of concatenation: %s\n", concad);
    free(concad);
    return 0;
}