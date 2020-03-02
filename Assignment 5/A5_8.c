/*
CH-230-A
a5 p8.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <stdio.h>
#include <stdlib.h>
//void matrix_maker(int **a, int x, int y); //Makes the 2D malloc matrix (Did not work I have question about it below)
void matrix_valueadder(int **a, int x, int y); //Enters the value to the matrix
void printer_matrix(int **a, int x, int y);    //Prints the 2D matrix
void cross_prodmatrx(int **a, int **b, int **c, int x, int y, int z); //Computes a x b and prints C.
int main()
{
    // Cross product of matrix(m, n) with matrix (n, p) = matrix(m, p)
    int m, n, p;
    scanf("%d", &m);
    scanf("%d", &n);
    scanf("%d", &p);
    //Two dimentional matrix A with dimentions m, n :
    int **matrixa;
    matrixa = (int **)malloc(sizeof(int *) * m); //Pointer to the array of rows
    if (matrixa == NULL)
    {
        exit(1);
    }
    for (int i = 0; i < m; i++)
    {
        matrixa[i] = (int *)malloc(sizeof(int) * n); //One element of a row is a pointer to a list of columns
        if (*matrixa == NULL)
        {
            exit(1);
        }
    }
    //Two dimentional matrix B with dimentions n, p :
    int **matrixb;
    matrixb = (int **)malloc(sizeof(int *) * n); //Pointer to the array of rows
    if (matrixb == NULL)
    {
        exit(1);
    }
    for (int i = 0; i < n; i++)
    {
        matrixb[i] = (int *)malloc(sizeof(int) * p); //One element of a row is a pointer to a list of columns
        if (*matrixb == NULL)
        {
            exit(1);
        }
    }
    // The resulting product of AxB with dimentions m, p :
    int **prodmatrx;
    prodmatrx = (int **)malloc(sizeof(int *) * m); //Pointer to the array of rows
    if (prodmatrx == NULL)
    {
        exit(1);
    }
    for (int i = 0; i < m; i++)
    {
        prodmatrx[i] = (int *)malloc(sizeof(int) * p); //One element of a row is a pointer to a list of columns
        if (*prodmatrx == NULL)
        {
            exit(1);
        }
    }
    matrix_valueadder(matrixa, m, n);
    matrix_valueadder(matrixb, n, p);
    printf("Matrix A\n");
    printer_matrix(matrixa, m, n);
    printf("Matrix B\n");
    printer_matrix(matrixb, n, p);
    printf("The multiplication result AxB:\n");
    cross_prodmatrx(matrixa, matrixb, prodmatrx,  m, n, p);
    printer_matrix(prodmatrx, m, p);
    //Freeing the memory allocated for A:
    for (int i = 0; i < m; i++)
        free(matrixa[i]);
    free(matrixa);
    //Freeing the memory allocated for B:
    for (int i = 0; i < n; i++)
        free(matrixb[n]);
    free(matrixb);
    //Freeing the memory allocated for AxB:
    for (int i = 0; i < m; i++)
        free(prodmatrx[m]);
    free(prodmatrx);
    return 0;
}
//Question to the TA grading this: Why can I not use the function below to dynamically allocate memory?
// void matrix_maker(int **a, int x, int y)
// {
//     a = (int**) malloc(sizeof(int*) * x); //Pointer to the array of rows
//     if(a == NULL)
//     {
//         exit(1);
//     }
//     for (int i = 0; i < x; i++)
//     {
//         a[i] = (int*) malloc(sizeof(int) * y); //One element of a row is a pointer to a list of columns
//         if(*a == NULL)
//         {
//             exit(1);
//         }
//     }
// }

void matrix_valueadder(int **a, int x, int y)
{
    for (int i = 0; i < x; i++) //Loop for row
    {
        for (int j = 0; j < y; j++) //Loop for column
        {
            scanf("%d", &a[i][j]);
        }
    }
}

void printer_matrix(int **a, int x, int y)
{
    for (int i = 0; i < x; i++) //Loop for row
    {
        for (int j = 0; j < x; j++) //Loop for column
        {
            printf("%d ", a[i][j]);
        }

        printf("\n");
    }
}

void cross_prodmatrx(int **a, int **b, int **c, int x, int y, int z)
{   
    int sum;
    for (int i = 0; i < x; i++)
    {
        for(int k = 0; k < z; k++)
        {
            sum = 0;
            for(int j = 0; j < y; j++)
            {
                sum += a[i][j] * b[j][k];
            }
            c[i][k] = sum;
        }
    }
}