/*
CH-230-A
a5 p5.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <stdio.h>
#include <stdlib.h>

double scalar_product(double *v, double *w, int n); //Gives the scalar product
void small_large(double *v, int n); //gives the smallest and largest values of the function

int main()
{
    double *vector1;
    double *vector2;
    int dimention;
    scanf("%d", &dimention);
    vector1 = (double *)malloc(sizeof(double) * dimention);
    if (vector1 == NULL)
    {
        exit(1);
    }
    vector2 = (double *)malloc(sizeof(double) * dimention);
    if (vector2 == NULL)
    {
        exit(1);
    }
    double component;                   //To help enter values to the vector arrays
    for (int i = 0; i < dimention; i++) //Loop to enter values for vector 1
    {
        scanf("%lf", &component);
        vector1[i] = component;
    }
    for (int i = 0; i < dimention; i++) //Loop to enter values for vector 2
    {
        scanf("%lf", &component);
        vector2[i] = component;
    }

    printf("Scalar product=%lf\n", scalar_product(vector1, vector2, dimention));
    small_large(vector1, dimention);
    small_large(vector2, dimention);
    free(vector1);
    free(vector2);
    return 0;
}

double scalar_product(double *v, double *w, int n)
{
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + (v[i] * w[i]);
    }
    return sum;
}

void small_large(double *v, int n)
{
    double maxv = v[0];
    int maxpos = 0;
    double minv = v[0];
    int minpos = 0;
    for (int i = 0; i < n; i++)
    {
        if (maxv < v[i])
        {
            maxv = v[i];
            maxpos = i;
        }
        if (minv > v[i])
        {
            minv = v[i];
            minpos = i;
        }
    }
    printf("The smallest = %lf\n", minv);
    printf("Position of smallest = %d\n", minpos);
    printf("The largest = %lf\n", maxv);
    printf("Position of largest = %d\n", maxpos);
}