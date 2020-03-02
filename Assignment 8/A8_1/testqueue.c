/*
CH-230-A
a8 p1.c
Abhilekh Pandey
ab.pandey@jacobs-universi
*/

#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
#define MAXIMUM 10

int main()
{
    Queue line;
    line.first = line.last = NULL;
    line.size = 0;
    char condition;
    int item;
    do
    {
        scanf("%c", &condition);
        switch (condition)
        {
        case 'a':
            scanf("%d", &item);
            AddItem(&line, item);
            break;

        case 'd':
            printf("Removing %d from queue\n", line.first->item);
            NextInLine(&line);
            break;

        case 'p':
            printQueue(line);
            break;
        
        case 'q':
            printf("Bye.\n");
            CleanExit(&line);
            break;
        
        default:
            printf("%d items in queue\n", line.size);
            printf("Type a to add, d to delete, p to print, q to quit:\n");
        }
    } while (condition != 'q');

    return 0;
}