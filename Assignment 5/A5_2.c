/*
CH-230-A
a5 p2.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/
#include <stdio.h>

void divby5(float arr[], int size); //Divides every element of the array 'arr' of size 'size' by 5
int main()
{
    float arrr[6] = {5.5, 6.5, 7.75, 8.0, 9.6, 10.36};
    printf("Before:\n");
    for (int i = 0; i < 6; i++) //Loop to print values of arrr
    {
        printf("%.3f ", arrr[i]);
    }
    printf("\n");
    divby5(arrr, 6); //Values of arrr are modified cause this is passing by reference
    printf("After:\n");
    for (int i = 0; i < 6; i++) //Loop to print values of arrr
    {
        printf("%.3f ", arrr[i]);
    }
    printf("\n");
    return 0;
}

void divby5(float arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = (arr[i] / 5);
    }
}