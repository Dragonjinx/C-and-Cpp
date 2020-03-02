/*
CH-230-A
a2 p10.c
Abhilekh Pandey
abpandey@jacobs-university.de
*/

#include <stdio.h>

int main(){
    int d;
    /* : ^) */
    do {
    
    printf("Enter a number: \n");
    
    scanf("%d", &d);
    
    getchar();
    
    }
    
    while (d <= 0);
    
    for (int i = 1; i <= d; i++ ) {

        int h = 24 * i;
    
        printf("%d Days = %d Hours\n", i, h);
    }
    
    return 0;
}