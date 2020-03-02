
#include <stdio.h>

void yodafyer(char arr[]);

int main() {

    char array[50];

    printf("You say: ");

    fgets(array, 50, stdin);

    yodafyer(array);

    return 0;

}

void yodafyer(char arr[]) {

    char yo[25];

    char da[25];

    char ad[25];

    char oy[25];

    sscanf(arr, "%s %s %s %s", yo, da, oy, ad);

    printf("Yoda says: %s %s %s %s\n", oy, ad, yo, da);
}

/*
for (int i = 0; i < 50; i++ ){

    printf("This: %c\n", *array[i])
}
*/