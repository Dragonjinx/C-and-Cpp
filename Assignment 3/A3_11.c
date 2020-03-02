/*
CH-230-A
a3 p11.c
Abhilekh Pandey
ab.pandey@jacobs-university.de
*/

/* Fuck this problem*/

#include <stdio.h>
#include <string.h>
int main()
{

    char one[30];
    char two[30];
    char find;

    fgets(one, 30, stdin);
    strtok(one, "\n"); // Removes the new line character from the input
    fgets(two, 30, stdin);
    strtok(two, "\n"); // Removes the new line character from the inpur
    scanf("%c", &find);
    printf("length1=%lu\n", strlen(one));
    printf("length2=%lu\n", strlen(two));
    printf("concatenation=%s\n", strcat(one, two)); // This is the  3w

    char three[30];

    strcpy(three, two);  // I give up on the proplem with '.'

    printf("copy=%s\n", three);

    int comp = strcmp(two, one); // compares 2 and 1
    if (comp >= 1)
    {
        printf("one is smaller than two\n");
    }
    else if (comp == 0)
    {
        printf("one is equal to two\n");
    }
    else if (comp < 0)
    {
        printf("one is larger than two\n");
    }
    int i;
    for (i = 0; i <= strlen(two); i++)
    {

        if (two[i] == find)
        {
            printf("position=%d\n", i);

            break;
        }

        else if (i == strlen(two))
        {
            printf("The character is not in the string\n");

            break;
        }
    }

    return 0;
}