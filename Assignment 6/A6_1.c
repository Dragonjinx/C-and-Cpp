/*
CH-230-A
a6 p1.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <stdio.h>
#define SWITCHEROO(A, B, T) {T tempo = A; A = B; B = tempo;}

int main()
{
    int a;
    int b;
    double c;
    double d;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%lf", &c);
    scanf("%lf", &d);

    SWITCHEROO(a, b, int);
    SWITCHEROO(c, d, double);
    printf("After swapping:\n");
    printf("%d\n", a); 
    printf("%d\n", b);
    printf("%lf\n", c);
    printf("%lf\n", d);
    return 0;
}