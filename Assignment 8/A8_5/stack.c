/*
CH-230-A
a8 p4.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/
#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

Stack push(Stack a, char b[])
{
    char *pointer = b;
    for(int i = 0; i < SIZE; i++)
    {
        if(isfull(a) == 1)
        {
            break;
        }
        
        if(*pointer == '\0')
        {
            break;
        }
        
        for(int j = 0; j < SIZE; j++)
        {
            while(*pointer != ' ' && *pointer != '\0')
            {
                a.array[i][j] = *pointer;
                pointer = pointer + sizeof(char);
            }
            
        }
        a.count++;
    }
    return a;
}


void Dumpstack(Stack a, char *b)
{
    char *pointer = b;
    if(isempty(a) == 1)
    {
        return;
    }
    for(int i = a.count - 1 ; i >= 0; i--)
    {
        for(int j = 0; j < SIZE; j++)
        {
            while(a.array[i][j] !='\0')
            {
                *pointer = a.array[i][j];
                pointer  = pointer + sizeof(char);
            }
        }
        *pointer = ' ';
        pointer = pointer + sizeof(char);
    }
}

int isfull(Stack a)
{
    if(a.count == SIZE)
    {
        return 1;
    }
    else
        return 0;
}

int isempty(Stack a)
{
    if(a.count == 0)
    {
        return 1;
    }
    else
        return 0;    
}