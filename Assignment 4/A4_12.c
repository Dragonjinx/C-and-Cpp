/*
CH-230-A
a4 p12.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void replacer(char *c, char a, char b); // Replaces all occourences of a in string c with b. 

int main()
{
    char string[80];
    bool a = true;
    while (a == true){
        printf("Enter the string:\n");
        fgets(string, 50, stdin);
        strtok(string, "\n");
        char ext[5]={'s','t','o','p','\0'};
                int counter =0;
                for (int i = 0; i < 4; i++){
                    if (string[i] == ext[i]){
                    counter++;
                    }
                }
                if (counter == 4){
                    exit(1);
                }
        //Note to self: I DONT NEED GETCGAR AFTER FGETS.
        printf("Enter the character to replace:\n");
        char candidate;
        scanf("%c", &candidate);
        printf("Enter the character to replace it with:\n");
        char replacement;
        getchar();
        scanf("%c", &replacement);
        getchar();
        replacer(string, candidate, replacement);
        printf("Replaced String: %s\n", string);
    }
    return 0;

}

void replacer(char *c, char a, char b)
{
    for (int i = 0; i < 80; i++)
    {
        if (c[i] == a)
        {
            c[i] = b;
        }
        if (c[i] == '\0'){
            break;
        }
    }
    printf("String in function: %s\n", c);
}