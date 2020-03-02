/*
CH-230-A
a3 p10.c
Abhilekh Pandey
ab.pandey@jacobs-university.de
*/

#include <stdio.h>

float product(float a, float b); // computes the product of the floats

void product_by_ref(float a, float b, float *p); // Passes the value of the multiplication by reference

void modify_by_ref(float *a, float *b); // Passes the value of a and b by reference and modifies them

int main()
{

    float f1;
    float f2;
    printf("Enter value for float A: \n");
    scanf("%f", &f1);
    printf("Enter value for float B:\n");
    scanf("%f", &f2);
    printf("Product of the floats: %f \n", product(f1, f2));
    float pbyrf;
    product_by_ref(f1, f2, &pbyrf);
    printf("Product of the floats by reference: %f\n", pbyrf);
    modify_by_ref(&f1, &f2);
    printf("Modification of floats by reference: %f, %f\n", f1, f2);
    return 0;
}

float product(float a, float b)
{

    float prod;

    prod = a * b;

    return prod;
}

void product_by_ref(float a, float b, float *p)
{

    *p = a * b;
}

void modify_by_ref(float *a, float *b)
{

    *a += 3;
    *b += 11;
}