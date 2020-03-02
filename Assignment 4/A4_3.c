/*
CH-230-A
a4 p3.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <stdio.h>
#include <math.h>
float gmean(float n[], int a); //Returns the geometric mean of the elements in the array
float highest(float n[], int a); //Returns the highest value in the array
float smallest(float n[], int a); //Returns the smallest value in the array
float sum(float n[], int a); //Returns the sum of all the values in the array

int main()
{
    float numbers[15];
    float buffer;
    int counter = 0;
    char c;
    /* Loop to insert values into the array */
    for (int i = 0; i < 15; i++)
    {
        scanf("%f", &buffer);

        if (buffer < 0)
        {
            break;
        }
        else
        {
            numbers[i] = buffer;
            counter++;
        }
    }
    printf("Character time\n");
    getchar();
    scanf("%c", &c);
    int charcase = (int)c;

    switch (charcase)
    {
    case 109:
        printf("Geometric Mean = %f\n", gmean(numbers, counter));
        break;

    case 104:
        printf("Highest Number = %f\n", highest(numbers, counter));
        break;

    case 108:
        printf("Smallest Number = %f\n", smallest(numbers, counter));
        break;

    case 115:
        printf("Sum = %f\n", sum(numbers, counter));
        break;

    default:
        printf("Enter a valid modifier\n");
        break;
    }
}

float gmean(float n[], int a)
{
    long double mean = 0;
    long double multiply = 1;
    float root = 1 / (float) a; /* IMOIRTANT STEP OTHERWISE VALUE IS ALWAYS ROUNDED TO ZERO */
    for (int i = 0; i < a; i++)
    {
        multiply = multiply * pow(n[i], root); //To avoid the case where the value of multiply gets too large
    }
    mean = multiply;
    return mean;
}
float highest(float n[], int a)
{
    float high = n[0];
    for (int i = 0; i < a; i++)
    {
        if (n[i] > high)
       {
            high = n[i];
        }
    }
    return high;
}
float smallest(float n[], int a)
{
    float small = n[0];
    for (int i = 0; i < a; i++)
    {
        if (n[i] < small)
        {
            small = n[i];
        }
    }
    return small;
}
float sum(float n[], int a)
{
    float sum = 0;
    for (int i = 0; i < a; i++)
    {
        sum += n[i];
    }
    return sum;
}