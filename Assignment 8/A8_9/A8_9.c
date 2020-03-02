/*
CH-230-A
a8 p7.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    char name[30];
    char check;
    int prev = 0; //Checking if the previous was a end condition as well.
    int wordcount = 0;
    fgets(name, 30, stdin);
    strtok(name, "\n");

    fptr = fopen(name, "r");

    while(check != EOF)
    {
        check = getc(fptr);
        if(check == ' ' || check == ',' || check == '?' || check == '!' || check == '.' || check == '\t' || check == '\r' || check == '\n')
        {
            if(prev != 1)
            {
                wordcount ++;
            }
            prev = 1;
        }
        else
        {
            prev = 0;
        }
        
    }
    printf("The file has %d words.\n", wordcount);
    return 0;
}