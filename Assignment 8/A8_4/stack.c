/*
CH-230-A
a8 p4.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/
#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

Stack push(Stack a, int b)
{
    if(isfull(a) == 1)
    {
        // printf("Pushing Stack Overflow\n");
        return a;
    }
    // printf("Pushing %d\n", b);
    a.count += 1;
    a.array[a.count -1] = b;
    return a;
}

// Stack pop(Stack a)
// {
//     printf("Popping ");
//     if(isempty(a) == 1)
//     {
//         printf("Stack Underflow\n");
//         return a;
//     }
//     Stack b;
//     printf("%d", a.array[a.count - 1]);
//     b.count = a.count - 1;
//     //Removing everything except the last element
//     for(int i =0; i < b.count ;i++)
//     {
//         b.array[i] = a.array[i];
//     }
//     printf("\n");
//     return b;
// }

Stack empty(Stack a)
{
    // printf("Emptying Stack ");
    //Testcase. All hail mighty grader.
    // for(int i = a.count-1; i >= 0; i--)
    // {
        // printf("%d ", a.array[i]);
    // }
    Stack b;
    b.count = 0;
    // printf("\n");
    return b;
}

Stack binConvert(Stack a,int b)
{
    if (b != 0)
    {
        a = push(a, b % BASE);
        return binConvert(a, (b / BASE));
    }
    else 
        return a;
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