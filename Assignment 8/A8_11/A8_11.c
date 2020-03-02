/*
CH-230-A
a8 p7.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int n;
    FILE *output;
    char buff[69420]; ///YEAH BOIIIIIIIII
    memset(buff, '\0', sizeof(buff)); //Setting memory for buffer
    output = fopen("output.txt", "w"); //Outputting the file
    if (output == NULL)
    {
        exit(1);
    }
    setvbuf(output, '\0', _IOFBF, 694420); //Setting the buffer as a full buffer
    scanf("%d", &n);
    getchar();
    int count = 0;
    //Modified A8_8, it still don't work. I have no Idea why
    do
    {
        char files[30];
        fgets(files, 30, stdin);
        strtok(files, "\n");
        FILE *file1 = fopen(files, "r");
        if (file1 == NULL)
        {
            exit(1);
        }
        fseek(file1, 0, SEEK_END);
        long fsize = ftell(file1);
        fseek(file1, 0, SEEK_SET);
        fread(buff, 1, fsize, file1); //Adding all contents of file one into the buffer
        fwrite(buff, 1, fsize, output);
        fprintf(output, "\n");
        //fflush(output);
        fclose(file1);
        count++;
    } while (count < n);

    fclose(output);
    return 0;
}