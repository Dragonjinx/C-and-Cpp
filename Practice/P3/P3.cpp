#include <stdio.h>
#include <stdlib.h>

int main()
{
    int UsrSize;
    scanf("%d", &UsrSize);
    getchar();

    int *array = (int *)malloc(sizeof(int) * UsrSize);
    if (array == NULL)
    {
        exit(1);
    }
    printf("Enter %d integers:\n", UsrSize);
    for (int i = 0; i < UsrSize; i++)
    {
        scanf("%d", &array[i]);
    }
    FILE *outptr;
    outptr = fopen("squarex.txt", "w");
    if (outptr == NULL)
    {
        exit(1);
    }
    for (int i = (UsrSize - 1); i >= 0; i--)
    {
        fprintf(outptr, "%d %d\n", array[i], (array[i] * array[i]));
    }
    fclose(outptr);
    return 0;
}