/*
CH-230-A
a2 p4.c
Abhilekh Pandey
abpandey@jacobs-university.de
*/

#include <stdio.h>

int main(){
    float a;
   
    float b;
   
    float h;
    
    scanf("%f", &a);
   
    scanf("%f", &b);
   
    scanf("%f", &h);

    float sqa = a * a;
   
    float rectb = a * b;
   
    float trngh = 0.5 * a * h;
   
    float trap = h * (( a + b ) / 2);
   
    printf("square area=%f\n", sqa);
   
    printf("rectangle area=%f\n", rectb);
   
    printf("triangle area=%f\n", trngh);
   
    printf("trapezoid area=%f\n", trap);

    return 0;
    
}