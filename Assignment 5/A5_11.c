
/*
CH-230-A
a5 p11.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <stdio.h>
#include <stdlib.h>

int primer(int n, int d); // A second variable so that we can decrease it without affecting the prime number

int main()
{
    int a;
    scanf("%d", &a);
    if (primer(a, a) == 1)
    {
        printf("%d is prime\n", a);
    }
    else if (primer(a, (a - 1)) == 0)
    {
        printf("%d is not prime\n", a);
    }
    return 0;
}
//IDK why I have a return error but every time I try to use a variable and then return it, I get funky reasults.
int primer(int n, int d)
{
    if (n != 1)
    {
        int b = n % d;
        if (b == 0 && (d < n && 1 < d))
        {
            return 0;
        }
        else if(d == 1)
        {
            return 1;
        }
        else
        {
            primer(n, (d -1));
        }
    }
    else
    {
        return 0;
    }
}