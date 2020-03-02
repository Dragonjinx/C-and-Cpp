/*
CH-230-A
a3 p1.c
Abhilekh Pandey
ab.pandey@jacobs-university.de
*/

/*  x = User input float value
    n = User input integer value
    Prints 'x' n times only if n is a valid integer (greater than zero)
*/


#include <stdio.h>

int main() {
    
    float x;

    int n;

    scanf("%f", &x);

    do {
        
        scanf("%d", &n);

        if (n <= 0) {

            printf("Input is invalid, reenter value\n");
        
        }
    }
    while (n <= 0);


    for(int i = 1; i <= n; i++) {

        printf("%f\n", x);

    }


    return 0;
}