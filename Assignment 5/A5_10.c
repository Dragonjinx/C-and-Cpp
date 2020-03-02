/*
CH-230-A
a5 p10.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <stdio.h>
#include <stdlib.h>

void Printer(int n);

int main()
{
    int a;
    scanf("%d", &a);

    Printer(a);
    return 0;
}

void Printer(int n)
{
    if (n == 1) //Base case
    {
        printf("%d.\n", n);
    }
    else
    {
        printf("%d,", n);
        printf(" ");
        Printer(n -1); //Recursion Step
    }
}