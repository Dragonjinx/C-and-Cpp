#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

struct stack push(struct stack a, int b)
{
    if(isfull(a) == 1)
    {
        printf("Pushing Stack Overflow\n");
        return a;
    }
    printf("Pushing %d\n", b);
    a.count += 1;
    a.array[a.count -1] = b;
    return a;
}

struct stack pop(struct stack a)
{
    printf("Popping ");
    if(isempty(a) == 1)
    {
        printf("Stack Underflow\n");
        return a;
    }
    struct stack b;
    printf("%d", a.array[a.count - 1]);
    b.count = a.count - 1;
    //Removing everything except the last element
    for(int i =0; i < b.count ;i++)
    {
        b.array[i] = a.array[i];
    }
    printf("\n");
    return b;
}

struct stack empty(struct stack a)
{
    printf("Emptying Stack ");
    //Testcase. All hail mighty grader.
    for(int i = a.count-1; i >= 0; i--)
    {
        printf("%d ", a.array[i]);
    }
    struct stack b;
    b.count = 0;
    printf("\n");
    return b;
}

int isfull(struct stack a)
{
    if(a.count == 12)
    {
        return 1;
    }
    else
        return 0;
}

int isempty(struct stack a)
{
    if(a.count == 0)
    {
        return 1;
    }
    else
        return 0;    
}