/*
CH-230-A
a3 p8.c
Abhilekh Pandey
ab.pandey@jacobs-university.de
*/

#include <stdio.h>

float summer(float v[]);

float average(float s, float c);

int main()
{

    float numba[10];
    int count = 0;
    float buffer; //to check if value is correct before adding it to the array

    do
    {

        scanf("%f", &buffer);

        if (buffer == -99.0) //filters input
        {

            break;
        }
        else
        {

            numba[count] = buffer;

            count++;
        }
    } while (count < 10);

    float sum = summer(numba); 
    printf("Sum is : %f \n", sum);
    printf("Average is : %f \n", average(sum, count));

    return 0;
}

float summer(float n[])
{

    float sum = 0;
    for (int i = 0; i < 10; i++) //calculates sum
    {

        sum += n[i];
    }
    return sum;
}

float average(float s, float c) //calculates average
{
    float avg = 0;

    avg = s / c;

    return avg;
}
