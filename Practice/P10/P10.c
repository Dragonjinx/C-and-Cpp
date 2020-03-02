#include <stdio.h>
#include <stdlib.h>

int **createMATRIX(int row, int col)
{
    int **Matrix = (int **)malloc(sizeof(int *) * row);
    for (int i = 0; i < row; i++)
    {
        Matrix[i] = (int *)malloc(sizeof(int) * col);
        for (int j = 0; j < col; j++)
        {
            Matrix[i][j] = 0; //Iintializing it as zero because testcase
        }
    }
    return Matrix;
}

void PrintMatrx(int **Matrix, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", Matrix[i][j]);
        }
        printf("\n");
    }
}

void Deallocate(int **Matrix, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        free(Matrix[i]);
    }
    free(Matrix);
}

int main()
{
    FILE *input = fopen("matrix.dat", "r");
    if (input == NULL)
    {
        exit(1);
    }
    int rows = 0;
    int columns = 0;
    fscanf(input, "%d\n%d\n", &rows, &columns);

    //Debugging

    printf("Rows: %d, Columns: %d.\n", rows, columns);
    printf("all good?\n");
    char conti;
    scanf("%c", &conti);
    getchar();
    if (conti == 'y')
    {
        //Initilizing my matrix : 
        int **Matrix = createMATRIX(rows, columns);
        PrintMatrx(Matrix, rows, columns);

        int i, j, num; // Format is RowNum, ColNum, val at that coordinate
        while (!feof(input))
        {
            fscanf(input, "%d %d %d\n", &i, &j, &num);
            printf("Coordinates: %d,%d Value: %d\n", i, j, num);
            printf("all good?\n");
            char conti;
            scanf("%c", &conti);
            getchar();
            if (conti == 'y')
            {

                Matrix[i - 1][j - 1] = num;
            }
        }
        PrintMatrx(Matrix, rows, columns);
        Deallocate(Matrix, rows, columns);
        // }
        fclose(input);
        return 0;
    }