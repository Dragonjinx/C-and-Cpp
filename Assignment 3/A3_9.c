/*
CH-230-A
a3 p9.c
Abhilekh Pandey
ab.pandey@jacobs-university.de
*/

#include <stdio.h>

double sum25(double v[], int a); //function to calculate sum of 2nd and 5th element

int main()
{

    int n;
    double values[20];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {

        scanf("%lf", &values[i]);
    }

    if (sum25(values, n) == -111)
    {
        printf("One or both positions are invalid\n");
    }
    else
    {
        printf("sum=%lf\n", sum25(values, n));
    }

    return 0;
}

double sum25(double v[], int a)
{ //computes the sum of numbers at position 2 and 5

    double sum;
    if (a >= 6)
    {

        sum = v[2] + v[5];
    }
    else
    {

        sum = -111;
    }

    return sum;
}
