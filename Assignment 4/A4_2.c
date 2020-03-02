/*
CH-230-A
a4 p2.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char string[50];

    fgets(string, 50, stdin);
    strtok(string, "\n");

    for (int i = 0; i < strlen(string); i++)
    {
        if (i == 0)
        {
            printf("%c\n", string[i]);
        }

        else if (i % 2 == 0)
        {
            printf("%c\n", string[i]);
        }
        else
        {
            printf(" %c\n", string[i]);
        }
    }
    return 0;
}
