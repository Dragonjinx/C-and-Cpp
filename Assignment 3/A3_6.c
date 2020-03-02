/*
CH-230-A
a3 p6.c
Abhilekh Pandey
ab.pandey@jacobs-university.de
*/

/*  Kilos = User Input Kilogram Value
    Grams = User Input Gram Value
    Conv_Pounds = Function to convert the total weight (Kilos + Grams) to pounds
    KG = First integer argument taken by Conv_Pounds (Kilogram Argument)
    G = Second integer argument taken by Conv_Pounds (Gram Argument)
    pounds = float output of the conversion
*/

#include <stdio.h>

float Conv_Pounds(int KG, int G);

int main() {
    
    int Kilos;

    int Grams;

    scanf("%d", &Kilos);

    scanf("%d", &Grams);

    printf("Result of conversion: %f\n", Conv_Pounds(Kilos, Grams));
    
    return 0;
}

float Conv_Pounds(int KG, int G){

    float pounds;

    pounds = ((KG) + (G / 1000.0)) * 2.2;

    return pounds;
}