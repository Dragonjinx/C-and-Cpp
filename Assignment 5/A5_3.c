/*
CH-230-A
a5 p3.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <stdio.h>
#include <stdlib.h>  //for the exit clause
#include <stdbool.h> //for my loop
#include <string.h>  // for the string operations

int count_lower(char *str);

int main()
{

    char string[50];
    bool a = true;

    while (a == true)
    {

        fgets(string, 50, stdin);
        strtok(string, "\n"); 
        if (string[0] == '\n')
        {
            exit(69);
        }
        else
        {
            printf("Number of lowercase characters = %d\n", count_lower(string));
        }
    }
    return 0;
}
int count_lower(char *str)
{
    /*
    Relevant ascii values for the function:
    lowercase letters are from 97 to 122
    */
    //printf("%s\n", str);
    int a = strlen(str);
    int lowercase = 0;
    int i = 0;
    while (i < a)
    {
        if (*str >= 97 && *str <= 122)
        {
            lowercase++;
        }
        str = str + sizeof(char);
        i++;
    }
   return lowercase; 
}
