/*
CH-230-A
a2 p7.c
Abhilekh Pandey
abpandey@jacobs-university.de
*/

#include <stdio.h>

int main(){

    int i = 8;
    
    /* The While look was missing the opeaning and closing  {} for its statements*/
    while (i >= 4) {
        
        printf("i is %d\n", i);
        
        i--;
    }
    
    printf("That’s it.\n");
    
    return 0;
}
