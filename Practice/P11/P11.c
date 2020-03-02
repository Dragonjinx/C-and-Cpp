#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
    char str[30];
    struct node *next;
};

struct node *insertBegin(struct node *thisNode, char inpstr[])
{
    struct node *newBeg = (struct node *)malloc(sizeof(struct node));
    strcpy(newBeg->str, inpstr);
    newBeg->next = thisNode;
    return newBeg;
}

void printStruct(struct node *begin)
{
    // struct node *storage = begin;
    // int i = 0;
    // while (begin != NULL)
    // {
        // begin = begin->next;
        // i++;
    // }
    // int k = 0;
    // for (int j = 0; j < i; j++)
    // {
        // k = 0;
        // begin = storage;
        while (begin != NULL)
        {
            printf("%s ", begin->str);
            begin = begin->next;
        }
    printf("\n");
    //}
}

void freeStruct(struct node *begin)
{
    struct node *temp;
    while (begin != NULL)
    {
        temp = begin;
        begin = begin->next;
        free(temp);
        temp = NULL;
    }
}

int main()
{
    struct node *start = NULL; 
    int n;
    scanf("%d",&n);
    getchar();
    char temp[50];
    for(int i = 0; i < n; i++)
    {
        scanf("%s", temp);
        start = insertBegin(start, temp);
        printStruct(start);
    }
    return 0;
}