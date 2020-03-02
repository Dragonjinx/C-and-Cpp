/*
CH-230-A
a4 p11.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int count_insensitive(char *c, char a); // Counts the occourence of char c (case insensetive)

int main()
{
    char *string = (char *)malloc(sizeof(char) * 50);
    if (string == NULL) //Checking if malloc allocated memory
    {
        exit(1);
    }
    printf("Insert the string :\n");
    fgets(string, 50, stdin);
    strtok(string, "\n");
    int len = strlen(string);

    char *correctstring = (char *)malloc(sizeof(char) * len);
    if (correctstring == NULL) //Checking if malloc allocated memory
    {
        exit(1);
    }
    //printf("%s\n", string); //Debugging
    for (int i = 0; i < len; i++)
    {

        correctstring[i] = tolower(string[i]);
    }
    //printf("%s\n", correctstring); //Debugging
    free(string);

    char search[5] = {'b', 'H', '8', 'u', '$'};
    for (int i = 0; i < 5; i++)
    {
    printf("The character '%c' occours %d times\n", search[i], count_insensitive(correctstring, search[i]));
    }
    free(correctstring);
    return 0;
}

int count_insensitive(char *c, char a)
{
    a = tolower(a);
    int length = strlen(c);
    int count = 0;
    for (int i = 0; i < length; i++)
    {
        if (c[i] == a)
        {
            count++;
        }
    }
    return count;
}