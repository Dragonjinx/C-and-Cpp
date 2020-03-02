/*
CH-230-A
a7 p4.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

void tmplate(char a[], char (*formatter)(char));
char biggus(char a);
char smolus(char a);
char invertus(char a);
char exitmus(char a);

int main()
{
    char string[50];
    int arg;
    fgets(string, 50, stdin);
    strtok(string, "\n");
    char (*whyudodis[])(char) = {biggus, smolus, invertus, exitmus};
    //THIS IS ONLY SPEFIC TO THE QUESTION AND WON'T WORK IF YOU WANT CUSTOM CASES
    do
    {
        scanf("%d", &arg);
        tmplate(string, whyudodis[arg-1]);
    }while (arg != 4);
    return 0;
}

void tmplate(char a[], char (*formatter) (char))
{
    char notA[50];
    for(int i =0; i < 50; i++)
    {
        notA[i] = formatter(a[i]);
    }
    printf("%s\n", notA);
}

char biggus(char a)
{
    a =  toupper(a);
    return a;
}

char smolus(char a)
{
    a = tolower(a);
    return a;
}

char invertus(char a)
{
    if(isupper(a))
    {
        a = tolower(a);
    }
    else
    {
        a = toupper(a);
    }
    return a;
}

char exitmus(char a)
{
    exit(0);
    return a;
}