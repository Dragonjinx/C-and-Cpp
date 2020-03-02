#include <stdio.h>

int main() {
    int thing_var;
    int * thing_pnt = & thing_var;
    thing_var = 2;
    printf("Thing: %d\n", thing_var);
    *thing_pnt = 3;
    printf("Thing: %d\n", thing_var);
    printf("Thing: %d\n", *thing_pnt);
    return 0;
}