/*
CH-230-A
a5 p9.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <stdio.h>
#include <stdlib.h>

void input_arr(int ***a, int x, int y, int z); //Function to input values in a 3D array
void printer_arr(int ***a, int x, int y, int z); //Function to print 3D Array
int main()
{
    int Row; //Row 
    int Column; //Column
    int Depth; //Depth

    scanf("%d", &Row);
    scanf("%d", &Column);
    scanf("%d", &Depth);
    //Start of array creation
    int ***Cube = (int***)malloc(sizeof(int**) * Row); //Creating the Depth
    if (Cube == NULL)
    {
        exit(1);
    }
    for (int i = 0; i < Column; i++)
    {
        Cube[i] = (int**)malloc(sizeof(int*) * Column); //Creating the Row
        if (*Cube == NULL)
        {
            exit(1);
        }
        for (int j = 0; j < Depth; j++)
        {
            Cube[i][j] = (int*)malloc(sizeof(int) * Depth); //Creating the column
            if(**Cube == NULL)
            {
                exit(1);
            }
        }
    }
    //End of array creation
    //Cube[Depth][Row][Column]
    input_arr(Cube, Row, Column, Depth); //Takes imput for the array
    printer_arr(Cube, Row, Column, Depth); //Prints the array in sections
    //Start of memory deallocation
    for (int i = 0; i < Row; i++)
    {
        for (int j = 0; j < Column; j++) //We free memory allocated in the reverse order Depth > Row > Columns
        {
            free(Cube[i][j]);
        }
        free(Cube[i]);
    }
    free(Cube);
    //End of memory deallocation
    return 0;
}

void input_arr(int ***a, int x/*Row*/, int y/*Column*/, int z/*Depth*/)
{
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            for (int k = 0; k < z; k++)
            {
                scanf("%d", &a[i][j][k]);
            }
        }
    }
}

void printer_arr(int ***a, int x/*Row*/, int y/*Column*/, int z/*Depth*/)
{
    for (int k = 0; k < z; k++)
    {
        printf("Section %d:\n", (k+1));
        for (int i = 0; i < x; i++)
        {
            for (int j= 0; j < y; j++)
            {
                printf("%d ", a[i][j][k]);
            }
            printf("\n");
        }
    }
}