#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct river {
    char name[40];
    int length;
    int drainage_area;
} River;

int Comparision(const void *A, const void *B)
{
    River * A2 = (River *) A;
    River * B2 = (River *) B;
    if (A2->length > B2->length)
    {
        return 1;
    }
    return 0;
}

void Print_River_Arr(River A[], int elems)
{
    for(int i = 0; i < elems; i++)
    {
        printf("River %d:\n", i+1);
        printf("Name: %s Length: %d Area: %d\nOnto next one\n\n", A[i].name, A[i].length, A[i].drainage_area); 
    }
}

int main()
{
    River Array[30];    
    FILE * input = fopen("data.txt", "r");
    FILE * output = fopen("output.txt", "w");
    /*
    // Begin Buffer setting for file
    char InputBuffer[100];
    memset(InputBuffer, '\0', sizeof(InputBuffer));
    setvbuf( input, InputBuffer, _IOFBF, 100);
    // End Buffer setting
    */

    int (*functopass)(const void *, const void *) = &Comparision; // Setting the function pointer to pass to quicksort.
    // Temporary storage:
    char tempName[40];
    int tempLen;
    int tempArea;
    // While loop variable: (Also doubles as a element counter)
    int i =0;
    while(!feof(input) && i < 30)
    {
        fscanf(input, "%s %d %d\n", tempName, &tempLen, &tempArea);
        //Debugging:
        /* printf("Name: %s Length: %d Area: %d\nAll Good?\n", tempName, tempLen, tempArea);
        char yes;
        scanf("%c", &yes);
        getchar();
        if (yes == 'y')
        {*/
            River *Temp = (River *)malloc(sizeof(River));
            if (Temp == NULL)
            {
                exit(1);
            }
            strcpy(Temp->name, tempName);
            Temp->length = tempLen;
            Temp->drainage_area = tempArea;
            Array[i] = *Temp;
            free(Temp);
        //}
        /*else
        {
            Array[i] = NULL;
        }*/
        i++;
    }

    Print_River_Arr(Array, i);
    qsort((void *)Array, i, sizeof(River), functopass);
    Print_River_Arr(Array, i);
    for(int j = 0; j<i; j++)
    {
        fprintf(output, "%s %d %d \n", Array[j].name, Array[j].length, Array[j].drainage_area);
    }

    fclose(input);
    fclose(output);
    return 0;
}