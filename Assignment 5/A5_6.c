/*
CH-230-A
a5 p6.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void counter(float *a, int b);
void increaser(int *a, int b);

int main()
{
    int size;
    scanf("%d", &size);
    float *array = (float *)malloc(sizeof(float) * size);
    if (array == NULL)
    {
        exit(1);
    }
    for (int i = 0; i < size; i++)
    {
        scanf("%f", &array[i]);
    }
    counter(array, size);
    free(array);
    return 0;
}

void counter(float *a, int b)
{

    float *intermediate = a;
    while (*intermediate > 0)
    {
        intermediate++;
    }
    printf("Before the first negative value : %ld elements\n", intermediate - a);
}
