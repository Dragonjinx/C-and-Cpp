/*
CH-230-A
a4 p9.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <stdio.h>
#include <stdlib.h>

int prodminmax(int a[], int n); //Returns the product of the minimum and maximum value of the array
int main()
{

    int num;
    printf("Enter the number of elements:\n");
    scanf("%d", &num);
    int *arr = (int *)malloc(sizeof(int) * num);
    if (arr == NULL)
    {
        exit(1);
    }
    printf("Enter the values for the array:\n");
    for (int i = 0; i < num; i++)
    {

        scanf("%d", &arr[i]); //Note to self: this is legal.
    }
    //printf("Value 1: %d, Value 2: %d, Value 3: %d\n", arr[0], arr[1], arr[2]); (Debugging)
    printf("The product of the minimum and maximum values is : %d\n", prodminmax(arr, num));
    free(arr);
    return 0;
}

int prodminmax(int a[], int n)
{
    int maximum = a[0];
    int minimum = a[0];
    //printf("minA : %d maxA : %d\n", minimum, maximum); (Debugging)
    int product;
    for (int i = 0; i < n; i++)
    {
        if (minimum > a[i])
        {
            minimum = a[i];
        }
        if (maximum < a[i])
        {
            maximum = a[i];
        }
    }
    //printf("min: %d, max:%d\n", minimum, maximum); (Debugging)
    product = maximum * minimum;
    return product;
}