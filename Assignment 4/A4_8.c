/*
CH-230-A
a4 p8.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/
#include <stdio.h>
#include <stdlib.h>

void matrixprinter(int m[][30], int s); //Prints the matrix
void sdiagonal(int m[][30], int s);     //Prints the values under the second diagonal

int main()
{
    int matrix[30][30];
    int size;
    scanf("%d", &size);
    int value;

    for (int i = 0; i < size; i++) //Loop to input the values (row)
    {
        for (int z = 0; z < size; z++) //Loop to input the values (column)
        {
            scanf("%d", &value);
            matrix[i][z] = value;
        }
    }
    matrixprinter(matrix, size);
    sdiagonal(matrix, size);
}

void matrixprinter(int m[][30], int s)
{

    printf("The entered matrix is:\n");
    for (int i = 0; i < s; i++) //Goes through the rows
    {
        for (int z = 0; z < s; z++) //Goes through the column
        {
            printf("%d ", m[i][z]);
        }
        printf("\n");
    }
}
void sdiagonal(int m[][30], int s)
{
    printf("Under the secondary diagonal:\n");
    int diagonal = s - 1; //Since second diagonal starts to the right and the matrix coordinates start from 0.
    for (int i = 0; i < s; i++)
    {
        for (int z = 0; z < s; z++)
        {
            if (z > diagonal)
            {
                printf("%d ", m[i][z]);
            }
        }
        diagonal--; //Takes the diagonal to the left as the row progresses.
    }
    printf("\n");
}