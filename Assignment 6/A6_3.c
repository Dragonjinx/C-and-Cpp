/*
CH-230-A
a6 p3.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/
#include <stdio.h>
#define min(a, b) ((a < b) ? (a) : (b))
#define min3(a, b, c) (a < min(b, c) ? a : min(b, c))
#define max(a, b) ((a > b) ? (a) : (b))
#define max3(a, b, c) (a > max(b, c) ? a : max(b, c))
#define mid_range(a, b, c) ((min3(a, b, c) + max3(a, b, c)) / 2.0)

int main()
{
    int x, y, z;
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);
    printf("The mid-range is: %f\n", mid_range(x, y, z));
    return 0;
}