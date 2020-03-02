/*
CH-230-A
a7 p5.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void magick(int *arr, int (*comparision)(const void *, const void *), int size);
int decreasing(const void *a, const void *b);
int increasing(const void *a, const void *b);
void iBprintin(int *a, int size);

int main()
{
    int elems;
    scanf("%d", &elems);
    //Initializing array:
    int *notlist = (int *)malloc(sizeof(int) * elems);
    if (notlist == NULL)
    {
        exit(1);
    }

    //Entering elements:
    for (int i = 0; i < elems; i++)
    {
        scanf("%d", &notlist[i]);
    }

    char condition;
    do
    {
        scanf("%c", &condition);
        switch (condition)
        {
        case 97:
            magick(notlist, increasing, elems);
            break;

        case 100:
            magick(notlist, decreasing, elems);
            break;

        case 101:
            free(notlist);
            exit(0);
            break;
        }
    } while (condition != 101);
    return 0;
}

void magick(int *nlist, int (*comparision)(const void *, const void *), int size)
{
    //qsort(array, number of elements, size of each element in bits, function to compare)
    qsort(nlist, size, sizeof(int), comparision);
    iBprintin(nlist, size);
}

int increasing(const void *a, const void *b)
{
    //I am passing it as a void pointer and then forcing it to be the desired pointer (In this case int)
    //Did this so that it remains compatible with quick sort syntax
    const int *biggus = (int *)a;
    const int *smolus = (int *)b;
    if (*biggus > *smolus)
    {
        return (1);
    }
    else if (*biggus < *smolus)
    {
        return (-1);
    }
    else
    {
        return 0;
    }
}

int decreasing(const void *a, const void *b)
{
    //Same thing as previous but with a and b switched.
    const int *biggus = (int *)b;
    const int *smolus = (int *)a;
    if (*biggus > *smolus)
    {
        return (1);
    }
    else if (*biggus < *smolus)
    {
        return (-1);
    }
    else
    {
        return 0;
    }
}

void iBprintin(int *a, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]); //ITS ALIVEEEE  TERMINATOR 69
    }
    printf("\n");
}