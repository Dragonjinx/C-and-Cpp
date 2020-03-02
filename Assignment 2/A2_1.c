/*
CH-230-A
a2 p1.c
Abhilekh Pandey
abpandey@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    double D1;
    
    double D2;
    
    /*printf("Enter a double value: ");*/
    
    scanf("%lf", &D1);
    
    /*printf("Enter another double value: ");*/
    
    scanf("%lf", &D2);
    
    double sum = D1 + D2;
    
    double diff = D1 - D2;
    
    double d1sq = D1 * D1;
    
    int I1;
    
    int I2;
    
    /*printf("Enter a integer: ");*/
    
    scanf("%d", &I1);
    
    /*printf("Enter another integer: ");*/
    
    scanf("%d", &I2);
    
    int sumint = I1 + I2;
    
    int prdctint = I1 * I2;
    
    char C1;
    
    char C2;
    
    /*printf("Enter a character: ");*/
 
 /* you need getchar before every char scanf */
 
    getchar();
 
    scanf("%c", &C1);
 
    /*printf("Enter another character: ");*/
 
    getchar();
 
    scanf("%c", &C2);
 
    char sumchar = C1 + C2;
 
    char prdctchar = C1 * C2;
 
    printf("sum of doubles=%lf\n", sum);

    printf("difference of doubles=%lf\n", diff);

    printf("square=%lf\n", d1sq);

    printf("sum of integers=%d\n", sumint);

    printf("product of integers=%d\n", prdctint);

    printf("sum of chars=%d\n", C1 + C2);

    printf("product of chars=%d\n",C1 *C2);

    printf("sum of chars=%c\n", sumchar);

    printf("product of chars=%c\n", prdctchar);

    return 0;
}