#include <stdio.h>
#include <math.h>

int main () {
    int a = 7;
    int * ptr ;
    ptr = & a ;

    printf("Adresses of a: %p\n", ptr);
    printf("Value of a: %d\n", a);
    printf("Size of pointer %lu \n", sizeof(ptr));
    return 0;
}