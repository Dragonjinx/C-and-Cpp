/*
CH-230-A
a8 p6.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    fptr = fopen("chars.txt", "r"); //Opens file and sets pointer at the starting position.
    if (fptr == NULL)
    {
        exit(1);
    }
    char a;
    char b;
    a = getc(fptr); //Gets the first character and moves pointer
    b = getc(fptr); //Gets the character and moves pointer
    printf("Char A: %c \nChar B: %c \n", a, b);
    int d = (int)a + (int)b;
    FILE *fptr2 = fopen("codesum.txt", "a");
    if(fptr2 == NULL)
    {
        exit(1);
    }
    fprintf(fptr2, "%d", d);
    printf("Sum: %d\n", d);
    if (d == 69)
    {
        printf("Nice\n");
    }

    fclose(fptr);
    fclose(fptr2);
    return 0;
}