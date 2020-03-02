/*
CH-230-A
a3 p7.c
Abhilekh Pandey
ab.pandey@jacobs-university.de
*/

#include <stdio.h>

void trapezefier(int a, int b, char z); //function to print the trapezium

int main()
{

    int m;
    int n;
    char c;

    scanf("%d", &m);

    scanf("%d", &n);

    getchar(); //to prevent next scan f from taking \n as input

    scanf("%c", &c);

    getchar();

    trapezefier(m, n, c);

    return 0;
}

void trapezefier(int a, int b, char z){
    
    for (int i = 0; i < b; i++)
    {
        for (int y = 1; y < a; y++)
        {

            printf("%c", z);
        }

        a++;

        printf("\n");
    }
}