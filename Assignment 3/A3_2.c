/*
CH-230-A
a3 p2.c
Abhilekh Pandey
ab.pandey@jacobs-university.de
*/

/*  c = Input character
    mod = Decimal Modifier
    returns c, c - 1, ... , c - mod
*/

#include <stdio.h>

int main() {

    char c;

    int mod;
    
    do{

        scanf("%c", &c);

        getchar();

        if (c >= 97 && c <= 122){

            break;

        }
    }
    while ( c <= 97 || c >= 122);

    scanf("%d", &mod);

    for (int i = 0; i <= mod; i++){

        printf("%c\n", c - i);

    }
    return 0;
}