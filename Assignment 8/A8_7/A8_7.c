/*
CH-230-A
a8 p7.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    double a;
    double b;
    FILE *fptr1;
    FILE *fptr2;
    char name[30];
    printf("Name of first file: ");
    fgets(name, 30, stdin);
    strtok(name, "\n");
    fptr1 = fopen(name, "r");
    if (fptr1 == NULL)
    {
        exit(1);
    }
    printf("Name of second file: ");
    fgets(name, 30, stdin);
    strtok(name, "\n");
    fptr2 = fopen(name, "r");
    if(fptr2 == NULL)
    {
        exit(1);
    }

    fscanf(fptr1, "%lf", &a);
    fscanf(fptr2, "%lf", &b);

    double sum = a + b;
    double diff = a - b;
    double product = a * b;
    double division = a / b;
    FILE *sumf = fopen("results.txt", "a");
    if(sumf == NULL)
    {
        exit(1);
    }
    fprintf(sumf, " Sum: %f\n", sum);
    fprintf(sumf, " Difference: %f\n", diff);
    fprintf(sumf, " Product: %f\n", product);
    fprintf(sumf, " Division: %f\n", division);
    fclose(fptr1);
    fclose(fptr2);
    fclose(sumf);
    return 0;
}