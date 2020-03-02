/*
CH-230-A
a6 p4.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <stdio.h>
#include <stdlib.h>
#define INTERMEDIATE

int main()
{
    int dimention;
    scanf("%d", &dimention);
    int *V1 = (int *)malloc(sizeof(int) * dimention);
    if (V1 == NULL)
    {
        exit(1);
    }
    int *V2 = (int *)malloc(sizeof(int) * dimention);
    if (V2 == NULL)
    {
        exit(1);
    }

    for (int i = 0; i < dimention; i++) //Loop to enter values for vector 1
    {
        scanf("%d", &V1[i]);
    }
    for (int i = 0; i < dimention; i++) //Loop to enter values for vector 2
    {
        scanf("%d", &V2[i]);
    }
    int sum = 0;
#ifdef INTERMEDIATE
    printf("The intermediate product values are:\n");
#endif
    for (int i = 0; i < dimention; i++)
    {
        sum = sum + (V1[i] * V2[i]);
#ifdef INTERMEDIATE
        printf("%d\n", (V1[i] * V2[i]));
#endif
    }
    printf("The scalar product is: %d\n", sum);
    free(V1);
    free(V2);
    return 0;
}