/*
CH-230-A
a4 p4.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <stdio.h>
#include <stdlib.h>  //for the exit clause
#include <stdbool.h> //for my loop
#include <string.h>  // for the string operations

int consonant_counter(char v[]);
/* If a is the length of the string, function decreases it by 1 for every vowel and ' ' */

int main()
{

    char string[50];
    //char b;
    bool a = true;

    while (a == true)
    {

        //printf("Enter a string: \n");
        fgets(string, 50, stdin);
        strtok(string, "\n"); //strtok does not remove '\n' if it is the only element in the array
        if (string[0] == '\n')
        {
            exit(69);
        }
        else
        {
            printf("Number of consonants=%d\n", consonant_counter(string));
        /*    printf("Do you want to condinue? (y / n)\n");
            scanf("%c", &b);
            getchar();
            if (b == 121)
            {
                a = true;
            }
            else
            {
                a = false;
            }
        */}
    }
    return 0;
}
int consonant_counter(char v[])
{
    /*
    Relevant ascii values for the function:
    letters start from 65
    there are non letter characters between 90 and 97
    there are non letter characters after 122
    a = 97  A = 65
    e = 101 E = 69
    i = 105 I = 73
    o = 111 O = 79
    u = 117 U = 117
    */
    int a = strlen(v);
    int vowascii[10] = {65, 69, 73, 79, 85, 97, 101, 105, 111, 117};
    int consonants = a;
    for (int i = 0; i < a; i++)
    {
        if (v[i] < 65) //for all the symbols before 'A'
        {
            consonants--;
        }

        else if (v[i] > 90 && v[i] < 97) //for all the symbols between 'Z' and 'a'
        {
            consonants--;
        }
        else if (v[i] > 122) //for all the symbols after 'z'
        {
            consonants--;
        }
        else
        {
            for (int z = 0; z < 10; z++)
            {

                if (v[i] == vowascii[z]) //This is my hassle free solution to counting vowels
                {
                    consonants--;
                }
                else
                {
                    continue;
                }
            }
        }
    }
    return consonants;
}