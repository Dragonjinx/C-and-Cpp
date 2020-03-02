#include <stdio.h>

void sizepass(int a[]);
int main()
{
    int list[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("Size : %ld\n", (sizeof(list) / sizeof(int)));
    sizepass(list);
    return 0;
}
void sizepass(int a[])
{
    printf("Size after pass: %ld\n", sizeof(a));
    printf("Size after pass and div: %ld\n", (sizeof(a)/ sizeof(int)));
}