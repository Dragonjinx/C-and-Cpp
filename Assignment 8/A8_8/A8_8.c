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
    FILE *fptr1;
    FILE *fptr2;
    FILE *fptr3;
    char buff[69420]; ///YEAH BOIIIIIIIII
    memset(buff, '\0', sizeof(buff));
    fptr1 = fopen("text1.txt", "r"); //Opening file 1 in read mode
    if (fptr1 == NULL)
    {
        exit(1);
    }
    fptr2 = fopen("text2.txt", "r"); //Opeaning file 2 in read mode
    if (fptr2 == NULL)
    {
        exit(1);
    }
    fptr3 = fopen("merge12.txt", "a"); //Opeaning file 3 in write mode
    if (fptr3 == NULL)
    {
        exit(1);
    }
    setvbuf(fptr3, '\0', _IOFBF, 694420);
    /*The following sections contains modified code from 
    https://stackoverflow.com/questions/14002954/c-programming-how-to-read-the-whole-file-contents-into-a-buffer
    because one week is too little time to get used to both struct and FILE functions
    Also It still does not work XDDDDDDDDD*/
    fseek(fptr1, 0, SEEK_END);
    long fsize1 = ftell(fptr1);
    fseek(fptr1, 0, SEEK_SET);
    //I am saving the size of file 1 (I think)
    fread(buff, 1, fsize1, fptr1); //Adding all contents of file one into the buffer
    //(I put the -1 cause I think it does not include eof if I do that.).
    //Same thing for second file:
    fseek(fptr2, 0, SEEK_END);
    long fsize2 = ftell(fptr2);
    fseek(fptr2, 0, SEEK_SET);
    //I am saving the size of file 2
    fread(buff, 1, fsize2, fptr2);
    fflush(fptr3);

    fclose(fptr1);
    fclose(fptr2);
    fclose(fptr3);
    return 0;
}