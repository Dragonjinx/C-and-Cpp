/*
CH-230-A
a4 p6.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <stdio.h>
#include <stdlib.h>

void greatesttwo(int *c, int s); //The function with prints the two greatest numbers.

int main()
{
    int size;
    printf("Enter size of array:\n");
    scanf("%d", &size);
    int *array = (int *)malloc(sizeof(int) * size);
    if (array == NULL) //checking if malloc worked correctly or no.
    {
        exit(1);
    }
    int i = 0;
    int *input = array; //since I pass the array into the function later on I better not change it.
    printf("Enter Numbers for array:\n");
    while (i < size)
    {
        scanf("%d", input);
        input = input + sizeof(int);
        i++;
    }
    greatesttwo(array, size);
    free(array); //frees the memory allocated by malloc. 
    return 0;
}
void greatesttwo(int *c, int s)
{
    int i = 0;
    int buffer = *c;
    int maxchar = *c;
    while (i < s)
    {
        if (maxchar < *c)
        {
            buffer = maxchar;
            maxchar = *c;
        }

        c = c + sizeof(int);
        i++;
    }
    printf("The two greatest values are: %d, %d\n", maxchar, buffer);
}