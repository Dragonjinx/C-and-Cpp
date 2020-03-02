/*
CH-230-A
a7 p2.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int checkqueue(Queue a)
{
#ifdef MAXIMUM
    if (a.size == MAXIMUM)
    {
        return (1);
    }
    if (a.size == 0)
    {
        return (-1);
    }
    else
        return 0;
#endif
#ifndef MAXIMUM
    printf("Please define the maximum elements of the queue\n");
    return 69;
#endif
}

void AddItem(Queue *a, int b)
{
    printf("add int: ");
    switch (checkqueue(*a))
    {
    case 1:
        printf("Queue is full");
        break;

    case -1:
        printf("Putting %d into queue\n", b);
        Node *N1 = (Node *)malloc(sizeof(Node));
        N1->item = b;
        N1->next = NULL;
        a->first = N1;
        a->last = N1;
        a->size += 1;
        break;

    case 0:
        printf("Putting %d into queue\n", b);
        Node *N2 = (Node *)malloc(sizeof(Node));
        N2->item = b;
        N2->next = NULL;
        a->last->next = N2;
        a->last = N2;
        a->size += 1;
        break;
    }
}

void NextInLine(Queue *a)
{
    switch(checkqueue(*a))
    {
        case -1:
        printf("Nothing to delete\n");
        break;

        case 0:
        case 1:
            if(a->first == a->last)
            {
                free(a->first);
                a->first = NULL;
                a->last = NULL;
                a->size -= 1;
            }
            else
            {
                Node *temporary = a->first;
                a->first = a->first->next;
                free(temporary);
                a->size -= 1;
            }
            break;
    }
}

void printQueue(Queue a)
{
    printf("content of the queue: ");
    Node *pointer = a.first;
    while(pointer != NULL)
    {
        printf("%d ", pointer->item);
        pointer = pointer->next;
    }
    printf("\n");
}

void CleanExit(Queue *a)
{
    while(1)
    {
        switch(checkqueue(*a))
        {
            case 1:
            case 0:
                NextInLine(a);
                break;
            
            case -1:
                exit(0);
                break;
        }
    }
}