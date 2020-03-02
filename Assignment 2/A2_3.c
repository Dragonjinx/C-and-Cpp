/*
CH-230-A
a2 p3.c
Abhilekh Pandey
abpandey@jacobs-university.de
*/

#include <stdio.h>

int main() {
    
    int W;
    
    int D;
    
    int H;
    
    printf("How long have you not drunk coffee for? (weeks)");
    
    scanf("%d", &W);
    
    printf("How long till have you not drunk coffee for? (days)");
    
    scanf("%d", &D);
    
    printf("How long have you not drunk coffee for? (hours)");
    
    scanf("%d", &H);
    
    int coffeetime = (W * 7 * 24) + (D * 24) + (H);
    
    printf("You haven't drunk coffee in %d hours. \n", coffeetime);
    
    return 0;
}