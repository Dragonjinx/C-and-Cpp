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
    char name[30];
    char password[30];
    char check[30];
    int position[30];
    FILE *fptr1;
    fptr1 = fopen("users.txt", "r");
    if(fptr1 == NULL)
    {
        exit(1);
    }

    for(int i = 0; i< 30 && check[0] != EOF; i++)
    {
        position[i] = ftell(fptr1);
        fgets(check, 1, fptr1);
        fgets(check, 1, fptr1);
    }
    for(int i =0; i < 30; i++)
    {
        printf("%d", position[i]);
    }

    fseek(fptr1, 0, SEEK_SET);
    while(check[0] != EOF)
    {   
        printf("Username: ");
        fgets(name, 30, stdin);
        strtok(name, "\n");
        if(strcmp(name, "exit") == 0)
        {
            exit(1);
        }
        printf("Password: ");
        fgets(password, 30, stdin);
        strtok(name, "\n");
        for(int i = 0; i<30; i++)
        {
            fseek(fptr1, position[i], SEEK_SET);
            fgets(check, 30, fptr1);
            strtok(check, "\n");
            printf("Getting name %s\n", check);
            if(strcmp(check, name) == 1)
            {
                fgets(check, 30, fptr1);
                if(strcmp(check, password))
                {
                    printf("Access to user %s is granted.\n", name);
                    break;
                }
                else
                {
                    printf("Invalid details\n");
                    break;
                }
            }
        }
    }
    return 0;
}