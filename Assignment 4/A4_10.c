/*
CH-230-A
a4 p10.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <stdio.h>
#include <math.h>

void proddivpowinv(float a, float b, float *prod, float *div, float *pwr, float *invb); 
//Takes the address of the variables and modifies their contents accordingly
int main(){
    float numA;
    float numB;
    float product;
    float division;
    float ApowerB;
    float inverseB;

    scanf("%f", &numA);
    scanf("%f", &numB);

    proddivpowinv(numA, numB, &product, &division, &ApowerB, &inverseB);
    /* Since I am passing by reference I can print them in the main function */
    printf("Product is: %f\n", product); 
    printf("Division is : %f\n", division);
    printf("a^b is : %f\n", ApowerB);
    printf("1 / b is : %f\n", inverseB);

    return 0;
}


void proddivpowinv(float a, float b, float *prod, float *div, float *pwr, float *invb){

    *prod = a * b;
    *div = a / b;
    *pwr = pow(a, b);
    *invb = 1 / b;
}