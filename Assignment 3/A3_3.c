/*
CH-230-A
a3 p3.c
Abhilekh Pandey
ab.pandey@jacobs-university.de
*/

/*  ImputLengthCm = User Input of Length in Cm
    float_converter = Function to convert the length to kilometers with a output type of float
    cm = Integer argument taken by float_converter
    convert = float output of the conversion
*/

#include <stdio.h>

float float_converter(int cm);

int main() {

    int InputLengthCm;

    scanf("%d", &InputLengthCm);

    printf("Result of conversion: %f\n", float_converter(InputLengthCm));

    return 0;
}

float float_converter(int cm){

    float convert;

    convert = cm  / (1000 * 100.0);

    return convert;
}
