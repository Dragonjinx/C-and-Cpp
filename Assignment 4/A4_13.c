/*
CH-230-A
a4 p11.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

void uppercase(char *s);
void lowercase(char *s);
int main(){
    char string[90];
    bool a = true;
    while (a == true)
    {
        fgets(string, 90, stdin);
        strtok(string, "\n");
        char ext[5]={'e','x','i','t','\0'};
        int counter =0;
        for (int i = 0; i < 4; i++){
            if (string[i] == ext[i]){
            counter++;
            }
        }
        if (counter == 4){
            exit(1);
        }
        else{
            uppercase(string);
            lowercase(string);
        }
    }
    return 0;
}

void uppercase(char *s){
    for (int i = 0; i <strlen(s); i++){
        if(islower(s[i]) == 0){
            continue;
        }
        else{
            s[i] = toupper(s[i]);
        }
    }
    printf("uppcase=%s\n", s);
}

void lowercase(char *s){
    for (int i = 0; i < strlen(s); i++){
        if(isupper(s[i] == 0)){
            continue;
        }
        else{
            s[i] = tolower(s[i]);
        }
    }
    printf("lowcase=%s\n", s);
}