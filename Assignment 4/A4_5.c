/*
CH-230-A
a4 p5.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <stdio.h>
#include <stdlib.h>  //for the exit clause
#include <stdbool.h> //for my loop
#include <string.h>  // for the string operations

int consonant_counter(char v[]);
/* If a is the length of the string, function decreases it by 1 for every vowel and ' ' */
/*But this time it uses pointer arithmetic to go through the elements in the string */

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
        /*  printf("Do you want to condinue? (y / n)\n");
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
int consonant_counter(char v[]) //All the v[i] in this version is replaced with *otr.
/*I'm not setting a pointer as the parameter cause I don't think I need to pass by value */
{
    /*
    Relevant ascii values for the function:
    letters start from 65
    a = 97  A = 65
    e = 101 E = 69
    i = 105 I = 73
    o = 111 O = 79
    u = 117 U = 117
    */
    char *ptr = v;
    int a = strlen(v);
    int vowascii[10] = {65, 69, 73, 79, 85, 97, 101, 105, 111, 117};
    int consonants = a;
    int i = 0;
    while (i < a)
    {
        if (*ptr < 65) //for all the symbols before 'A'
        {
            consonants--;
        }

        else if (*ptr > 90 && *ptr < 97) //for all the symbols between 'Z' and 'a'
        {
            consonants--;
        }
        else if (*ptr > 122) //for all the symbols after 'z'
        {
            consonants--;
        }
        else
        {
            for (int z = 0; z < 10; z++)
            {

                if (*ptr == vowascii[z]) //This is my hassle free solution to counting vowels.
                {
                    consonants--;
                }
                else
                {
                    continue;
                }
            }
        }
        ptr = ptr + sizeof(char); //Because a string is a array of characters.
        i++;
    }
    return consonants;
}