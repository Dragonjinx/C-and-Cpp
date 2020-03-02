/*
CH-230-A
a5 p4.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/


#include <stdio.h>
#include <stdlib.h>

void divby5(float arr[], int size); //Divides every element of the array 'arr' of size 'size' by 5
int main()
{
    int n;
    printf("Enter size of array: \n");
    scanf("%d", &n);
    float component; // To add to the array
    float *arrr = (float*) malloc(sizeof(float) * n);
    if (arrr == NULL) //To check if malloc completed successfully or not
    {
        exit(1);
    }
   printf("Enter the values: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &component);
        arrr[i] = component;  
    }
    
    printf("Before division:\n");
    for (int i = 0; i < n; i++) //Loop to print values of arrr
    {
        printf("%.3f ", arrr[i]);
    }
    printf("\n");
    divby5(arrr, n); //Values of arrr are modified cause this is passing by reference
    printf("After division:\n");
    for (int i = 0; i < n; i++) //Loop to print values of arrr
    {
        printf("%.3f ", arrr[i]);
    }
    printf("\n");
    free(arrr);
    return 0;
}

void divby5(float arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = (arr[i] / 5);
    }
}