/*
CH-230-A
a2 p6.c
Abhilekh Pandey
abpandey@jacobs-university.de
*/

#include <stdio.h>

int main(){
    /* Declaring Variables */
    double x;
    
    double y;
    
    /* Scanning for input */
    scanf("%lf", &x);
    
    scanf("%lf", &y);

    /* Declaring Pointers: */
    double *ptr_one = &x;
    
    double *ptr_two = &x;
    
    double *ptr_three = &y;

    printf("Pointer one = %p\n", ptr_one);
    
    printf("Pointer two = %p\n", ptr_two);
    
    printf("Pointer three = %p\n", ptr_three);
    
    printf("Do pointer one and two have the same address?\n %d\n", ptr_one == ptr_two);
    
    printf("Do pointer one and three have the same address?\n %d\n", ptr_one == ptr_three);
    
    printf("Do pointer two and three have the same address?\n %d\n", ptr_two == ptr_three);

}