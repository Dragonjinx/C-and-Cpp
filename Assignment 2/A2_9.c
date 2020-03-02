/*
CH-230-A
a2 p9.c
Abhilekh Pandey
abpandey@jacobs-university.de
*/

#include <stdio.h>

int main()
{
    char c;
    scanf("%c", &c);

    if ((97 <= c && c <= 122) || (65 <= c && c <= 90))

        printf("%c is a letter\n", c);

    else if (48 <= c && c <= 57)
    {
        printf("%c is a digit\n", c);
    }
    else
    {
        printf("%c is some other symbol\n", c);
    }
    return 0;
}
