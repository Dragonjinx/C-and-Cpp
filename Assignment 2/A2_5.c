/*
CH-230-A
a2 p5.c
Abhilekh Pandey
abpandey@jacobs-university.de
*/

#include <stdio.h>

int main(){

    int a;
    
    scanf("%d", &a);
    
    int *ptr_a = &a;

    *ptr_a += 5;
    
    printf("Modified Value = %d\n", *ptr_a);
    
    printf("Pointer Address = %p\n", ptr_a);

    return 0;
}
