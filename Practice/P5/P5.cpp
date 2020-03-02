#include <stdio.h>
#include <stdbool.h>

bool odd(unsigned char data)
{
    if (data & 1)
    {
        return true;
    }
    return false;
}

int main()
{
    if (odd(30))
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
    return 0;
}