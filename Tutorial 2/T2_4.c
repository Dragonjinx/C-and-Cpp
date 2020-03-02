#include <stdio.h>

int main () {
    char line [100];
    int value ;
    printf ("Enter a value : ");
    fgets (line, sizeof(line), stdin);
    sscanf (line, "%d", &value);
    printf ("You entered : %d\n ", value) ;
return 0;
}
