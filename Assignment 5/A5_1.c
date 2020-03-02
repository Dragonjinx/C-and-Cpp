/*
CH-230-A
a5 p1.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <stdio.h>

void invertedtriangle(int n, char ch); //Prints a triangle of height n made out of 'ch'
int main()
{
    char cha;
    int height;

    scanf("%d", &height);
    getchar();
    scanf("%c", &cha);

    invertedtriangle(height, cha);
    return 0;
}

void invertedtriangle(int n, char ch)
{
    for (int i = n; i > 0; i--) //Because triangle is inverted
    {
        for (int z = 1; z <= i; z++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }
}