/*
CH-230-A
a4 p1.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/
#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main()
{
    float lower_limit;
    float upper_limit;
    float step;
    scanf("%f", &lower_limit);
    scanf("%f", &upper_limit);
    scanf("%f", &step);

    for (float i = lower_limit; i <= upper_limit; i += step)
    {
        printf("%f %f %f\n", i, (i * i * M_PI), (2 * M_PI * i));
    }

    return 0;
}