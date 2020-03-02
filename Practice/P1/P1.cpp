#include <stdio.h>

int main()
{
    char a = 'A';
    int n;
    scanf("%d", &n);
    getchar();
    for(int i = 0; i < n; i++)
    {
        for(int j =0; j < i; j++)
        {
            printf("%c", (a + j));
        }
        printf("\n");
    }
    return 0;
}